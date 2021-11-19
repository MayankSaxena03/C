/*
    Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
    Then print the pattern accordingly
    *
    **
    ***
    **** -> Triangular star pattern


    *****
    ****
    ***
    **
    * -> Reversed triangular star pattern
*/

#include <stdio.h>

int main()
{
    int choice, rows;
    printf("\nEnter number of rows : ");
    scanf("%d", &rows);
    printf("\nType 0 to print Triangular star pattern and 1 to print reverse tringular pattern : ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (choice == 1)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= rows - i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong Choice");
    }

    return 0;
}