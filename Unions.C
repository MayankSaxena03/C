/*
    Union is similar to structure. The only difference is that union has shared memory between its data members.
    The size of union will be equal to the size of data member tht occupies maximum size among all.
    Syntax of union is similar to syntax of structure.
    We can use only one data member at a time of union. Other values will be corrupted.
*/

#include <stdio.h>

struct Student
{
    int roll_no;
    int marks;
    char grade;
};

union Student2
{
    int roll_no;
    int marks;
    char grade;
}; /* The size of this union will be sizeof(int), because int occupies most space among int and char. */

int main()
{
    struct Student s1;
    /* Stroing data for s1. */
    s1.roll_no = 4;
    s1.marks = 98;
    s1.grade = 'A';
    /* Dispalying data of s1 */
    printf("Roll number of student 1 = %d\n", s1.roll_no);
    printf("Marks of student 1 = %d\n", s1.marks);
    printf("Grade of student 1 = %c\n", s1.grade);

    printf("\n---------------------------------------------------------\n\n");

    /* Union : -> In union we can only use one data member at a time from the data items. */
    union Student2 s2;
    /* Stroing data for s2. */
    s2.roll_no = 6; /* This will store value of roll_no in s2. */
    s2.marks = 82;  /* This will store value of marks in s2 and corrupt the value of roll_no. */
    s2.grade = 'B'; /* This will store value of grade in s2 and corrupt the value of marks. */
    /* Dispalying data of s2 */
    printf("Roll number of student 2 = %d\n", s2.roll_no);
    printf("Marks of student 2 = %d\n", s2.marks);
    printf("Grade of student 2 = %c\n", s2.grade);

    return 0;
}