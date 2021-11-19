/*
    * Static variables are variables which have property of preserving their values even when they go out of scope.
    * They preserve their value from previous scope and are not initialized again.
    * Static Variables remain in memory throughout the program.
    * Static variables are initialized to 0 if not initializede explicitly.
    * Static variables can be only initialized using constant literals.
    * Syntax : static data_type name = value;
*/

#include <stdio.h>

int ret()
{
    return 3;
}

void fun()
{
    /*Creating static variables*/
    static int i = 4;
    static int j; /* Value is not initialized explicitly so it is initialized to 0 automatically. */
    /* static int k = ret(); We cannot assign value like this to a static variables because when static variables are initialized before running main() by compiler when we run the program and we cannot call another function before main() */
    /* Changes will remain in static variables even after scope of the function ends. */

    /* Creating normal variable for comparison. */
    int a = 2;

    /* Printing values */
    printf("Value of i, j, a : %d  %d  %d\n\n", i, j, a);

    /* Changing values. */
    i++;
    j++;
    a++;
    /* Change in value of 'i' and 'j' will be preserved while changes in 'a' will be lost after function ends. */
}

int main()
{
    fun();
    fun();
    fun();
    fun();
    fun();
    return 0;
}
