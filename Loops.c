/* 
    A loop in program is used to perform repetitive tasks. Using a loop can save a lot of time and code if the task we have to perform is repetitive.
    There are three types of loops in C language :
        do-while loop
        while loop
        for loop
*/

/* Program */
#include <stdio.h>

int main()
{
    /* do-while loop */
    int i = 1, num;
    printf("Enter the number till which you want to print the series using do-while loop : ");
    scanf("%d", &num);

    do /* Loop Starts */
    {
        /* Loop Statements */
        printf("%d  ", i);
        i++;            /* Increment and decrement of variable to quit the loop when condition becomes false */
    } while (i <= num); /* Condition to run the loop */
    /* End of do-while loop */
    /* 
        do-while loop one time even if the starting condition is false because the condtion is checked after runnin the block of code.
        If we enter value of num less than one then the initial condition will be false but the code will run one time because condition is checked afterwards.
    */

    /* while loop */
    i = 1;
    printf("\n\nEnter the number till which you want to print the series using while loop : ");
    scanf("%d", &num);

    while (i <= num) /* Loop Starts with the condition to run the loop */
    {
        /* Loop Statements */
        printf("%d  ", i);
        i++; /* Increment and decrement of variable to quit the loop when condition becomes false */
    }
    /* End of while loop */

    /* For Loop */
    /* 
        * Syntax
        for(expression 1; expression 2; expression 3) 
        {
            Code Statements
        }
    */
    /* 
        Expression 1 properties :
        *   Expression 1 is used to initialize the variables.
        *   We can initialize as many variables as we want.
        *   If the variables are already initialize we dont need to write this statement : for(; expression 2; expression 3;)   
    */
    /*
        Expreession 2 properties :
        *   Expression 2 consist of the condition to run the loop.
        *   We can write as many statements as we want in expression 2 but only the last statement will be considered as condition and 
            all other statements will be considered as normal programming statements.
        *   We can ignore this expression but then the loop will run infinitely long : for(expression 1 ;; expression 3) 
   */
    /*
        Expression 3 properties :
        * Expression 3 consist of increment/decrement of variables.
        * We can increment/decrement as many variables as we like
        * We can ignore this expression but then the loop will run infinitely long : for(expression 1; expression 2; )
  */

    printf("\n\nFor Loop");
    printf("\nCase 1 \n");
    int a, b;
    for (a = 1; a <= 5; a++)
    {
        printf("%d  ", a);
    }

    printf("\nCase 2 \n");
    for (a = 1, b = 1; a <= 3, b <= 5; a++, b++) /* Loop will run while the last statement of expression 2 (b<=5) is true. */
    {
        printf("%d%d  ", a, b);
    }

    return 0;
}