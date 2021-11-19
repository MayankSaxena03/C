#include <stdio.h>

/* Passing array to the function. */
void function1(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Value at index %d of first array : %d\n", i, array[i]); /* Accessing values through index */
    }
}

/* Passing address to the function */
void function2(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Value at index %d of second array : %d\n", i, *(ptr + i)); /* Accessing values through address */
    }
}

/* Passing 2D array in function. Note -> Entering row is not compulsary but entering number of columns is a must */
void function3(int array[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value at index [%d][%d] of third array : %d\n", i, j, array[i][j]); /* Accessing values through index */
        }
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]); /* This is how we calculate number of items stored in array */
    function1(arr1, size1);
    printf("\n----------------------------------------------\n\n");
    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    function2(arr2, size2);
    printf("\n----------------------------------------------\n\n");
    int arr3[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    function3(arr3, size3);
    return 0;
}

/* Note -> Changes made to an array inside any function will reflect in actual array because we are passing the base address of array in parameters i.e. "&array[0]". */