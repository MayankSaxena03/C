/* You need to convert a value from 1 unit to another. After one conversion you need to ask the user if he wants to convert another value. If user types 'Y', user can input and convert another value. */
/*
    Conversion Cases : 
    * kms to miles
    * inches to foot
    * cm to inches
    * pound to kgs
    * inches to meters
*/

#include <stdio.h>

int main()
{
    /* Variables Declaration */
    int choice;
    float a, b;
    char convertAgain;
    convertAgain = 'Y';

    /* Loop */
    while (convertAgain == 'Y' || convertAgain == 'y')
    {
        /* Asking user what conversion he wants. */
        printf("\n\nEnter your choice for conversion \n    1. kilometers to miles\n    2. inches to foot\n    3. centimeter to inches\n    4. pounds to kilograms\n    5. inches to meters\n");
        scanf("%d", &choice);

        /* Converting as per choice of user */
        switch (choice)
        {
        case 1:
            printf("\nEnter value in kilometers : ");
            scanf("%f", &a);
            b = 0.621371 * a;
            printf("\nValue of %f kilometers is equal to %f miles", a, b);
            break;

        case 2:
            printf("\nEnter value in inches : ");
            scanf("%f", &a);
            b = 0.0833333 * a;
            printf("\nValue of %f inches is equal to %f foot", a, b);
            break;

        case 3:
            printf("\nEnter value in centimeter : ");
            scanf("%f", &a);
            b = 0.393701 * a;
            printf("\nValue of %f centimeter is equal to %f inches", a, b);
            break;

        case 4:
            printf("\nEnter value in pounds : ");
            scanf("%f", &a);
            b = 0.453592 * a;
            printf("\nValue of %f pounds is equal to %f kilogram", a, b);
            break;

        case 5:
            printf("\nEnter value in inches : ");
            scanf("%f", &a);
            b = 0.0254 * a;
            printf("\nValue of %f inches is equal to %f meters", a, b);
            break;

        default:
            printf("\nWrong Choice");
        }

        /* Asking user if he wants to convert again or exit. */
        printf("\n\nType 'Y' to convert another value. Press any other key to exit : ");
        scanf(" %c", &convertAgain); /* Here i have given a space in " %c". It is given so that scanf ignores previous enter or characters pressed. If it is not provided the character will read the key pressed before as the character. You can read here :  https://gsamaras.wordpress.com/code/caution-when-reading-char-with-scanf-c/ */
    }

    return 0;
}