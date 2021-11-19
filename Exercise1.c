/*
Take an input (in integer form) from the user and print its multiplication table on the screen. 
Use the things taught till now
Following is the example of the output.

Input:
Enter the number you want multiplication table of: 6

Output:
Table of 6.

6*1 = 6
6*2 = 12
6*3 = 18
6*4 = 24
6*5 = 30
6*6 = 36
6*7 = 42
6*8 = 48
6*9 = 54
6*10 = 60
*/

//Program

#include <stdio.h>

int main()
{
    /* code */
    //Input
    int number;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &number);

    //Output
    printf("%d * 1 = %d\n", number, number * 1);
    printf("%d * 2 = %d\n", number, number * 2);
    printf("%d * 3 = %d\n", number, number * 3);
    printf("%d * 4 = %d\n", number, number * 4);
    printf("%d * 5 = %d\n", number, number * 5);
    printf("%d * 6 = %d\n", number, number * 6);
    printf("%d * 7 = %d\n", number, number * 7);
    printf("%d * 8 = %d\n", number, number * 8);
    printf("%d * 9 = %d\n", number, number * 9);
    printf("%d * 10 = %d\n", number, number * 10);

    return 0;
}
