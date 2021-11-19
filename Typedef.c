/*
    Typedef is used to give an alias to data types.
    
    Syntax -> typedef previous_name alias;

    Example : typedef unsigned long ul; -> Now we can create variables using (i) unsigned long a,b; (ii) ul a,b;
*/

#include <stdio.h>

typedef int integer; /* Giving alias to int */

int main()
{
    integer a = 5; /* Creating integer data type with new alias given to 'int' */
    int b = 6;     /* Creating integer data type with int */
    printf("Value of 'a' is %d\n", a);
    printf("Value of 'b' is %d\n", b);
    return 0;
}
