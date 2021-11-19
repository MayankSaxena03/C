/*
    Function Pointers point to code and not data.
    Unlike normal pointers, we do not allocate or deallocate memory using function pointers.
*/

/*
    Callback FUnctions

    A callback is any executable code that is passed as an argument to other code, which is expected to call back (execute) the argument at a given time. 
    In simple language, If a reference of a function is passed to another function as an argument to call it, then it will be called as a Callback function.

        * Function pointers are used to pass functions to functions.
        * This passed function can be called again (hence the name callback function).
        * This reduces the length of code
*/

#include <stdio.h>
#include <math.h>

int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

/* We will use this function to return (a+b)^2  or (a-b)^2 based on what user want. We are using a single function to calculate (a+b)^2 and (a-b)^2. */
int square(int a, int b, int (*fptr)(int, int))
{
    int num = (*fptr)(a, b);
    return pow(num, 2);
}
/* Square function will callback the function whose address is stored in fptr. */

int main()
{
    int a, b, choice;

    int (*fptr)(int, int);

    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);

    printf("What do you want to calculate? \n1: (a+b)^2\n2: : (a-b)^2\n");
    scanf("%d", &choice);

    /* If the user choose 1, fptr will point to sum else if user choose 2 fptr will point to subtract. */
    switch (choice)
    {
    case 1:
        fptr = sum;
        printf("(a+b)^2 : %d", square(a, b, fptr));
        break;

    case 2:
        fptr = subtract;
        printf("(a-b)^2 : %d", square(a, b, fptr));
        break;

    default:
        printf("Wrong Choice");
    }
    return 0;
}
