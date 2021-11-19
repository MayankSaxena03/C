/*
    We can have pointers pointing to functions as well. They are called function pointers.
    Function pointers are useful to implement callback functions.
*/

#include<stdio.h>

int sum (int a, int b) {
    return a + b;
}

int main()
{
    int (*fptr)(int, int); /* Declaring function pointer which will point to a function having return type int and take two integers as arguments. */
    fptr = sum; /* fptr is pointing towards function sum now. We can also use fptr = &sum as both sum and &sum will return address of function. */

    int d = (*fptr)(3, 4); /* Dereferencing the pointer by passing (3, 4) as arguments and storing the result in variable d. */

    printf("Sum of 3 and 4 : %d", d);
    return 0;
}
