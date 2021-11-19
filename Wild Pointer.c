/* Uninitialized pointers are known as wild pointers. */
/*
    Wild Points point to arbitrary location in memory and may cause a program to crash or behave badly.
    Dereferencing wild pointers can cause bugs.
    It is suggested to always initialize unused pointers with NULL. 
*/

#include <stdio.h>

int main()
{
    int *ptr; /* Wild Pointer */
    /* *ptr = 3; This is not recommended because if the memory location is not valid, it may lead the program to crash. We will always get undefined behaviour. */
    int a = 5;
    ptr = &a; /* Now, ptr is no more a wild pointer. */
    printf("Value at ptr : %d", *ptr);
    return 0;
}
