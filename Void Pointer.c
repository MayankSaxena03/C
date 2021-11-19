#include <stdio.h>

int main()
{
    void *ptr; /* Pointer with type void is a general purpose pointer. We cannot dereference it directly. We would need to typecast this pointer if we need to dereference it. Pointer arithmatics is not recommended to use with void pointers because compiler won't know the memory required to allocate for void data type. */
    int a = 5;
    ptr = &a;
    /* printf("Value of a : %d\n", *ptr); This will return error because we cannot dereferece a pointer with void as a data type. */
    printf("Value of a : %d\n", *((int *)ptr)); /* We can derefernce a void pointer by typecasting it into another data type. */
    float b = 8.4;
    ptr = &b;
    printf("Value of b : %f\n", *((float *)ptr)); /* Will return value stored in b */
    /* In above code, we have used pointer to store the address of different data types. */
    return 0;
}
