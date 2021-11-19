/*
    * Pointer is a variable which stores address of another variable.
    * Can be of type int, char, array or any other pointer.
    * Size is dependent on architecture. It takes 2 bytes on 32 bit architecture.
    * Can be declared using '*' (asterisk) symbol.
    * '&' is the "address of" operator and it returns address of the variable.
    * '*' is the "dereference" operator and is used to get value at given address. It is also known as "indirection operator".
*/

#include <stdio.h>

int main()
{
    int a = 76;
    int *pointer = &a;

    /* Accessing address of 'a' through "address of" operator. */
    printf("Address of 'a' is %d.\n", &a);                                 /* Here we found address of 'a' using "address of" operator. */
    printf("Address of 'a' calculated through pointer is %d.\n", pointer); /* pointer has the address of 'a' stored. So it returns address of 'a'. */

    /* Accessing value of 'a' through "derefernce" operator. */
    printf("Value of 'a' is %d.\n", a);
    printf("Value of 'a' calculated through pointer is %d.\n", *pointer); /* pointer has the address of 'a'. So, "*pointer" is returning the value of 'a' */
    return 0;
}

/*
    Uses of pointers :

    * Dynamic memory allocation.
    * Reduces the code and improves the performance.
    * Arrays, Structures, and Functions.
*/
