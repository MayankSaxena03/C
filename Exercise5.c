/*
    Reverse an array. 
    Print array before reversal and after reversal.
*/

#include <stdio.h>

void reverseArray(int array[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array before reversal : ");
    printArray(array, size);

    printf("\n");

    reverseArray(array, size);
    printf("Array after reversal : ");
    printArray(array, size);
    return 0;
}
