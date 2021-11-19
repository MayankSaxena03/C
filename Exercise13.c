/*
    You have to create a command line utility to add/subtract/divide/multiply two numbers
    First command line argument of your c program must be the operation.
    The next arguments being the two numbers. For example:
    >>Command.exe add 45 4
    >>49
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    num1 = atoi(argv[2]); /* This will cast argument 2 to int */
    num2 = atoi(argv[3]); /* This will cast argument 3 to int */

    if (strcmpi(argv[1], "add") == 0)
    {
        printf("Addition : %d\n", num1 + num2);
    }
    else if (strcmpi(argv[1], "subtract") == 0)
    {
        printf("Subtraction : %d\n", num1 - num2);
    }
    else if (strcmpi(argv[1], "multiply") == 0)
    {
        printf("Multiplication : %d\n", num1 * num2);
    }
    else if (strcmpi(argv[1], "divide") == 0)
    {
        printf("Division : %f\n", (num1 * 1.0) / num2);
    }
    else
    {
        printf("Wrong Argument for Operation");
    }
    return 0;
}
