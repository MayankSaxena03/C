/*
    This program asks the user to enter the size of rows and columns of two matrices (a and b). Both of the matrices are 2D array. Your task is to populate these 2D arrays from the user, and then your program will display the results. Following is the condition to multiply the two matrices.
    To multiply two matrices, the number of columns of the first matrix should be equal to the number of rows of the second matrix.
    When this condition satisfies, your program should return the multiplied matrix result. However, if this condition does not satisfy, then your program should display a message to end-user that it cannot perform the multiplication of matrices.
*/

#include <stdio.h>

void inputMatrix(int a[][5], int r, int c)
{
    printf("\n\n*****************************   Input Elements Matrix   *****************************\n\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Element at [%d][%d] of matrix : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int a[][5], int b[][5], int c[][5], int r1, int c1, int r2, int c2)
{
    int sum;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            sum = 0;
            for (int k = 0; k < c1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
}

void printMatrix(int c[][5], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d      ", c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[5][5], b[5][5], c[5][5];
    int r1, r2, c1, c2;
    printf("Enter rows in first matrix : ");
    scanf("%d", &r1);
    printf("Enter columns in first matrix : ");
    scanf("%d", &c1);
    printf("Enter rows in second matrix : ");
    scanf("%d", &r2);
    printf("Enter columns in second matrix : ");
    scanf("%d", &c2);
    if (c1 == r2)
    {
        inputMatrix(a, r1, c1);
        printf("\n\n*****************************   First Matrix    *****************************\n\n");
        printMatrix(a, r1, c1);

        inputMatrix(b, r2, c2);
        printf("\n\n*****************************   Second Matrix    *****************************\n\n");
        printMatrix(b, r2, c2);

        multiplyMatrix(a, b, c, r1, c1, r2, c2);
        printf("\n\n*****************************   Resultant Matrix    *****************************\n\n");
        printMatrix(c, r1, c2);
    }
    else
    {
        printf("\nMultiplication is not possible because the number of columns of first matrix is not equal to the number of rows of second matrix. \n");
    }
    return 0;
}
