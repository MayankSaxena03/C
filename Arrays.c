/* 
    An array is a collection of data items of same data type.
    It can also store derived data types like pointers, structures.
    Items are stored at contiguous memory location i.e each item is stored into adjacent memory of another.
    A one-dimensional array is like a list.
    A two- dimensional array is like a table.
    There is no limit on number of dimensions of array.
    Accessing an item in array is very fast.
    Array index starts at 0.
*/

/*
    Syntax:
    data_type name[size];
    data_type name[size] = {data1, data2 .... dataN}; size is optional in this case.

    For 2D Arrays :
    data_type name[rows][columns];
    data_type name[rows][columns] = {{}, {}, .... {}}; rows is optional in this case.
*/

#include<stdio.h>

int main()
{
    /* 1D-Array */
    int a[5]; /* Declaring array. */
    int b[] = {1,3,5,7,9}; /* Writing size in brackets here is optional as we are declaring and initializing it in the same line. */ /* Declaration and initialization */
    printf("Value at index 3 of array b is %d.\n\n", b[3]); /* We can access array elements like this. */
    /* We can initialize array using loop. */
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value of array a at index %d : ", i);
        scanf("%d", &a[i]); /* Input value in array 'a' at index 'i'. */
    }
    /* After above loop our array 'a' will be initialized. */

    /* Displaying arrays 'a' & 'b' */

    printf("\nArray a : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    /* Above loop access values of array 'a' at index 0 to 4. */

    printf("\n"); /* Line Break */

    printf("\nArray b : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", b[i]);
    }
    /* Above loop access values of array 'b' at index 0 to 4. */
    

    /* 2D-Array */
    int c[3][3];
    int d[][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; /* Writing size in first (row) brackets here is optional as we are declaring and initializing it in the same line. */
    printf("\n\nValue at index [2][1] of array d is %d\n", d[2][1]);

    /* Initializing array 'c' using nested for loop */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value of array c at index [%d][%d] : ", i,j);
            scanf("%d", &c[i][j]); /* Input value in array 'c' at index [i][j] */
        }
    }
    /* After above loop our array 'c' will be initialized. */
    
    /* Displaying arrays 'c' & 'd' */
    printf("Array c : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
    /* Above loop access and print values of array 'c' from index [0][0] to [2][2]. */

    printf("Array d : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", d[i][j]);
        }
        printf("\n");
    }
    /* Above loop access and print values of array 'd' from index [0][0] to [2][2]. */

    return 0;
}

/* 
    Disadvantages of arrays 

    * Poor time complexity of insertion and deletion operation.
    * Wastage of memory since arrays are fixed in size.
    * Even if there is enough space in memory but it is not in contiguous form, we won't be able to initalize array.
    * After declaring array we cannot change its size.
*/