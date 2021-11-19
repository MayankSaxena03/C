/* Functions are used to divide our program in small parts. We can use sam block of code many times by calling the function. */

/*
    Syntax:
    
    Function Declaration :

    return_type function_name(arguments);

    ------------------------------------------------------------------------------------

    Function definition :

    return_type function_name(arguments) {
        ------------
        Code---------
        ------------
    }

    --------------------------------------------------------------------------------------

    Function Calling :

    function_name(arguments); 

    ---------------------------------------------------------------------------------------

    Example:
    
    If we need to create a function named max() with 3 integer arguments which return the maximum value among 3 : we can use following syntax
    
    int max(int a, int b, int c); -> function declaration

    function definition :

    int max(int a, int b, int c) {
        ------------
        Code---------
        ------------
        return max_value;
    }

    int d = max(a, b, c); -> function calling

    We used variable d to store the value returned by function max();

*/

/*
    Note : If the function is written above main() in code then we don't need to write the declaration for that function.
*/

#include <stdio.h>

/* Declaring sum1() and sum2() before main() because they ar defined after main() */
void sum1();
void sum2(int a, int b);

/* No declaration required for sum3() and sum4() as they are defined before main() */

/* Function with a return and no argument */
int sum3()
{
    return 6 + 4;
}

/* Function with both argument and return */
int sum4(int a, int b)
{
    return a + b;
}

int main()
{
    int c;
    sum1(); /* Calling function with no argument and no return */
    sum2(1, 4); /* Calling funtion with arguments and return */
    c = sum3(); /* Calling function with a return and no argument. We are storing returned value in variable "c". */
    printf("Sum 3 : %d\n", c);
    c = sum4(2, 1); /* Calling function with both argument and return. We are storing returned value in variable "c". */
    printf("Sum 4 : %d\n", c);
    return 0;
}

/* Functions sum1() and sum2() were defined after main so their declaration has to be done before main() */
/* Function with no argument and no return */
void sum1()
{
    printf("Sum 1 : %d\n", 2 + 5);
}

/* Function with argument and no return */
void sum2(int a, int b)
{
    printf("Sum 2 : %d\n", a + b);
}