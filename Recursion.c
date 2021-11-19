/* Calling the function within the same function is called recursion. */
/*
    There are 2 cases in recursive approach :
    * Base Case : This is the termination case of program.
    * Recursive Case : This is the case when we call the function again.
*/

/* Here we will see the example of solving factorial using recursion. */

#include <stdio.h>

int factorial(int number)
{
    /* If condition has the base case i.e. when the value of number reaches 0 or 1 then end the recursion by returning their facorial which is 1. 0 is includde in base case so if the user inputs 0 as number it can return facorial as 1. */
    if (number == 0 || number == 1)
    {
        return 1; /* Base Case */
    }
    else
    {
        return (number * factorial(number - 1)); /* Recursive Case */
    }
    /* Else condition has the recursive case. If number is greater than 1 the the function will be called to solve the facotrial of (number-1). */
}

/*
    Function above will have following approach :
    If the number entered by the user is 5, then it will be evaluated as :
    function call 1 -> 5! -> Recursive Case
    function call 2 -> 5 * 4! -> Recursive Case
    function call 3 -> 5 * 4 * 3! -> Recursive Case
    function call 4 -> 5 * 4 * 3 * 2! -> Recursive Case
    function call 5 -> 5 * 4 * 3 * 2 * 1! -> Base Case
*/

int main()
{
    int number;
    printf("Enter the number you want to calculate factorial for : ");
    scanf("%d", &number);
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}