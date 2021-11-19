/*
    *Typecasting refers to converting one form of data type to another.
*/

#include <stdio.h>

int main()
{
    int a = 5;
    float b = 10;
    printf("Value of \"a\" in int : %d\n", a);
    printf("Value of \"a\" in float : %f\n", (float)a); /* Converting integer a to type float using typecasting -> (float) a */

    printf("Value of \"b\" in int : %d\n", (int)b); /* Converting float b to type int using typecasting -> (int) b */
    printf("Value of \"b\" in float : %f\n", b);

    float c = 54 / 5;
    printf("Value of \"c\" is : %f\n", c);
    /* Printing value of c should give the result -> 10.8000, but instead it will give 10.0000 but instead it will return 10.0000 because we are doing a operation between to integers to get value of float c. */
    /* 
        Refer below Table to know operation between which quantities give what return

     --------------------------------------------
     |   variable-1 |  variable-2  |   result   |
     |------------------------------------------|
     |      int     |     int      |   int      |
     |------------------------------------------|
     |      int     |     float    |   float    |
     |------------------------------------------|
     |      float   |     int      |   float    |
     |------------------------------------------|
     |      float   |     float    |   float    |
     --------------------------------------------
      
    */

    /* To get the value of c upto decimal place we need to convert one unit into float */
    c = (float)54 / 5;
    printf("Value of \"c\" after type conversion is : %f\n", c);
    return 0;
}