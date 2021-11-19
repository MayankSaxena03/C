/* There are two types of variables -> Local Variable and Global Variable */

/*
    * Local Variables have a scope of a function.
    * Global Variables have scope of whole program.
*/

#include <stdio.h>

int g = 10; /* Global Variable -> This can be used anywhere in the program. */
int main()
{
    int a = 1; /* Local variable -> This has a scope of this block of code only. */
    printf("Value of a : %d\n", a);
    printf("Value of global variable 'g' : %d\n", g); /* We have not declared variable g in main function but it is declared globally so we are able to use it. */
    return 0;
}

/* If name of local variable and global variable is same then the local variable takes precedence. */