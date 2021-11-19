/*
    Declaration : Telling compiler about the variable
    Definition : Telling compiler about the variable and reserving the memory for it.
*/

#include <stdio.h>
#include "temp.c" /* including data from temp.c */

int sum; /* It is a global variable. The storage class is extern. It can be used anywhere in the program, i.e. the scope of these variables is complete program. We should minimize their use as they occupies some memory throughout the program. */

int fun(int a, int b)
{
    sum = a + b; /* Using global variable with extern storage class. */
    return sum;
}

void fun2()
{
    static int m = 1; /* These are static variables. Storage classes of them is static. Scope of these variables is throughout the block of their function. We should minimize their use as they occupies some memory throughout the program. */
    printf("Static Variable Value : %d\n", m);
    m++;
}

int main()
{
    auto int a = 5; /* This is local variable. It is same as "int a = 5;". By default the storage class is auto. The scope of these variables is their function block. */
    /* We have 2 variables with name 'a'. One auto variable here and one exern variable in temp.c. We can see the difference below : */
    printf("Auto variable Value : %d\n", a);
    {
        extern int a; /* We are telling the compiler that we want the variable defined external to its scope. */
        printf("Extern variable Value : %d\n", a);
    }
    /* For static */
    fun2();
    fun2();
    fun2();
    fun2();

    register int n = 3;
    printf("Register Variable Value : %d\n", n); /* This variable's storage type is register. If there is space in CPU register, then the variable is store in CPU register for faster access. Other properties are similar to auto storage class. */
    
    return 0;
}
