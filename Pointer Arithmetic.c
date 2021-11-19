#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = &a; /* Creating a pointer to store address of integer 'a' */
    printf("Value of a : %d\n", a);
    printf("Value of a through pointer : %d\n", *ptr);
    printf("Address of a : %d\n", &a);
    printf("Address of a through pointer : %d\n", ptr);

    printf("Address next to address of variable 'a' : %d\n", ptr + 1); /* This will display the value of address by incresing it in such a way : ptr + 1x(sizeof(int)) */
    /* If the variable type have been char and we would have used "ptr + 2" above then we would have to use ptr + 2x(sizeof(char)) */

    printf("\n-------------------------------------------------------------------\n\n"); /* Line Break */
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Address of index 0 of array : %d\n", &arr[0]);
    printf("Address of index 0 of array : %d\n", arr); /* Name of an array will point to the first element of that array i.e. its 0th index. */

    printf("Address of index 4 of array : %d\n", &arr[4]);
    printf("Address of index 4 of array : %d\n", arr + 4); /* This will return the same address as &arr[4]. We have used the same logic that we have used with pointer "*ptr". This will be calculated as -> "(base address i.e. &a[0] or arr) + 4x(sizeof(int))" */

    printf("Value at index 6 of array : %d\n", arr[6]);
    printf("Value at index 6 of array : %d\n", *(arr + 6)); /* This will return same result as arr[6]. */

    /*
        Note : 
               arr--; arr++; arr = arr + 1; arr - 1;
               Above lines of code will return an error because "arr" is a constant. 

               Size of data type will be different accross devices and operating system.
    */
    return 0;
}