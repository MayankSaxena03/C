/*
    * Structures are user defined data types.
    * Structures allow us to combine different types of data together.
    * Structure is similar to array but we can store different types of data types in structure.
*/

#include <stdio.h>

/* Creating structure with 3 items -> int, int, char */
struct Student
{
    int roll_no;
    int marks;
    char grade;
};

struct Student harsh; /* Global variable */

/*
    We can also crete global variable after structure as shown below :
    struct Structures
    {
        data
    } global_variable1, global_variable2, ..., global_variableN;

    Ex -> 
    struct Student
    {
        int roll_no;
        int marks;
        char grade;
    } harsh, mayank;
*/

int main()
{
    struct Student mayank; /* Local variable */
    mayank.roll_no = 4;    /* We can acces different data of a structure using dot (.) (member access operator) operator. */
    mayank.marks = 54;
    mayank.grade = 'A';
    printf("Roll no. %d Mayank scored %d marks and got %c grade.\n", mayank.roll_no, mayank.marks, mayank.grade);

    harsh.roll_no = 2; /* We can acces different data of a structure using dot (.) operator. */
    harsh.marks = 58;
    harsh.grade = 'A';
    printf("Roll no. %d Harsh scored %d marks and got %c grade.\n", harsh.roll_no, harsh.marks, harsh.grade);

    return 0;
}
