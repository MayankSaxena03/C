/* A pointer pointing to a freed memory location or the location whose content has been deleted is called a dangling pointer. */
/*
    Causes of dangling pointer : 

        * Deallocation of memory
        * Returning local variables in function calls
        * Variable going out of scope.  
*/
/*
    * Dangling Pointers can cause bugs in program.
    * Dangling pointers frequently become security holes at time.
    * Issues caused by dangling pointers can be avoided by initializing pointer to NULL 
*/

#include <stdio.h>
#include <stdlib.h>

int *dangling()
{
    int a, b, sum;
    a = 5;
    b = 6;
    sum = a + b;
    return &sum; /* Returning address of a local variable */
}

int main()
{
    printf("Dangling Pointer");
    /* Dangling pointer by deallocation of memory */
    int *ptr1;
    ptr1 = (int *)malloc(sizeof(int));
    free(ptr1); /* Pointer is dangling now */

    /* Dangling pointer by returning local variables in function calls */
    int *ptr2;
    ptr2 = dangling(); /* The content of the address returned is deleted because the scope of the variable was local. */

    /* Dangling pointer if variable goes out of scope */
    int *ptr3;
    {
        int a = 5;
        *ptr3 = a;
    }
    /* The memory location where ptr3 is pointing is now freed because the variable to which it was pointing went out of scope. */
    return 0;
}
