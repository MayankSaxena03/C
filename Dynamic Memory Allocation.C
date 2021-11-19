#include <stdio.h>
#include <stdlib.h> /* Dynamic memory allocation functions are included in this header file */

int main()
{
    /* malloc example */
    int *ptr;
    int n;
    printf("\nEnter the size you want to allocate using malloc : ");
    scanf("%d", &n);
    /*
        malloc() Syntax :
         ptr = (int*) malloc(size_in_bytes_to_allocate);
    */
    ptr = (int *)malloc(n * sizeof(int)); /* This will allocate size of n integers to ptr. */
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter element at index %d of ptr1 : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nElement at index %d of ptr1 : %d", i, ptr[i]);
    }

    free(ptr); /* This will free the memory used by pointer ptr */

    /* calloc example */
    int *ptr2;
    printf("\nEnter the size you want to allocate using calloc : ");
    scanf("%d", &n);
    /*
        calloc() Syntax :
         ptr = (int*) calloc(number_of_elements, size_of_element);
    */
    ptr2 = (int *)calloc(n, sizeof(int)); /* This will allocate size of n integers to ptr. */
    /* calloc() will initialize each element with default value '0' */
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter element at index %d of ptr2 : ", i);
        scanf("%d", &ptr2[i]);
    } /* If we do not initialize vallue here the value allocated to all the elements will be '0' */
    for (int i = 0; i < n; i++)
    {
        printf("\nElement at index %d of ptr2 : %d", i, ptr2[i]);
    }

    /* realloc example */
    /* We will change the size of ptr2 dynamically using realloc() */
    printf("\nEnter the new size you want to allocate to ptr2 : ");
    scanf("%d", &n);
    /*
        realloc() Syntax :
         ptr = (int*) realloc(ptr, (no_of_elements)*(size_of_element));
    */
    ptr2 = (int *)realloc(ptr, n * sizeof(int)); /* This will change the memory allocated to ptr2. We would need to initialize our ptr2 array again. */
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter element at index %d of ptr2 : ", i);
        scanf("%d", &ptr2[i]);
    } /* If we do not initialize vallue here the value allocated to all the elements will be '0' */
    for (int i = 0; i < n; i++)
    {
        printf("\nElement at index %d of ptr2 : %d", i, ptr2[i]);
    }

    free(ptr2); /* This will free the memory allocated to ptr2. */

    return 0;
}
