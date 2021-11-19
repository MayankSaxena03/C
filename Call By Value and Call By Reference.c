/* 
    There are 2 ways to pass parameters in the function :
    1) Call By Value -> In parameters, the value of variable is passed. Changes made in function are not reflected in actual parameters or variables.
    2) Call By Reference -> In parameters, the address of variable is passed. Changes made in function are reflected in actual parameters or variables because we are changing value at a memory address, and not in any variable.
*/

#include<stdio.h>

/* Call by Value Function */
void callByValue(int n) {
    n = 39;
}

/* Call by Reference Function */
void callByReference(int* n) {
    *n = 39; /* Changing value at address */
}

int main()
{
    int a = 34;
    printf("Value of 'a' : %d\n", a);
    callByValue(a); /* Passing value as parameter in function i.e. calling the function by value */
    printf("Value of 'a' after calling a function by value : %d\n", a);
    callByReference(&a); /* Passing address in parameter i.e. calling the function by reference */
    printf("Value of 'a' after calling a function by reference : %d\n", a);
    return 0;
}
