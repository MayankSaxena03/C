#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    // if-else
    /*Statements within "if" will run if the condition in "if" is true otherwise statements within "else" will execute*/
    if (age >= 18)
    {
        printf("You can vote\n");
    }
    else
    {
        printf("You cannot vote\n");
    }

    //if-else if-else
    /* Statements within "if" will run if the condition in "if" is true. If the condition in "if" is false conditions within "else-if" will be checked. If they are true then the statements within "else-if" will execute. If none of the conditions are true in "if" and "else-if", statements within "else" will execute. */
    /* We can add as many "else-if" between if-else as we like */

    if (age == 18)
    {
        printf("You just turned 18\n");
    }
    else if (age > 18)
    {
        printf("You can vote\n");
    }
    else
    {
        printf("You cannot vote\n");
    }

    return 0;
}
