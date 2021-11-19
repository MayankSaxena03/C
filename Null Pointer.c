/* Pointer pointing towards NULL is known as Null Pointer */
#include <stdio.h>

int main()
{
    int *ptr = NULL; /* This pointer is referencing to NULL which makes it Null Pointer. */
    /* printf("%d", *ptr); This statement will cause issues while running the program because we cannot dereference null pointer. */
    /* We can use Null pointer to check if our pointer is referencing towards legit address as shown below */
    printf("Address of ptr : %d\n", ptr);

    if (ptr != NULL)
    {
        printf("Value at ptr : %d\n", *ptr);
    }
    else
    {
        printf("Pointer is referencing to NULL and cannot be dereferenced.\n");
    }

    int a = 5;

    ptr = &a; /* Now we can derefernce the pointer as it is no more pointing towards NULL */
    if (ptr != NULL)
    {
        printf("Value at ptr : %d\n", *ptr);
    }
    else
    {
        printf("Pointer is referencing to NULL\n");
    }
    /* Difference between Null Pointer and Void Pointer is that void pointer is a type while null pointer is a value. */
    return 0;
}
