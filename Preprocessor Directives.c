/*
    #include directive
        * The #include directive causes the preprocessor to fetch contents of some other file to be included in the present file.
        * Most commonly the #include files have ".h" extension indicating that they are header files.
        * In C programming there are 2 common formats for #include : 
            (a) #include <headerfile.h> The angle brackets say to look in the standard system libraries.
            (b) #include "myfile.h" The quotation say to look in the current directory.
        * Disk drive path is allowed, but discouraged since it is not portable.
            (a) #include <C:\Users\Mayank Saxena\Code\somefile> This path is too specific.
            (b) #include <sys/file.h> Relative and portable path to the standard locations.
*/

/*
    #define directive
        * The #define directive is used to "define" preprocessor variables.
        * The #define preprocessor directive can be used to globally replace a word with number.
        * It acts as if an editor did a global search and replace edit of the file.
        * We can also create macros using #define. Macros operate like functions, but because they are expanded in place and are generally faster.
*/

#include <stdio.h>
/* You can see how to include other file in "Storage Classes" program. */

/* Using #define */
#define PI 3.14        /* This will replace PI with 3.14 everywhere in the code. */
#define SQUARE(x) x *x /* This will replace SQUARE(x) with x * x everywhere in the code. */

int main()
{
    int radius;
    printf("Value of PI defined using #define : %f\n", PI);
    printf("Enter radius of a circle : ");
    scanf("%d", &radius);
    printf("Area of Circle with radius %d is %f", radius, PI * SQUARE(radius)); /* PI will be replaced by 3.14 and SQUARE(radius) will be replaced by radius*radius during preprocessing of the code. */

    /* There are some predefined macros in C */
    printf("\nDate : %s", __DATE__);                                  /* Will return current Date as character literal in the "MMM DD YYYY" format. */
    printf("\nTime : %s", __TIME__);                                  /* Will return current time as character literal in "HH:MM:SS" format. */
    printf("\nFile Name : %s", __FILE__);                             /* Will return current file name as a character literal. */
    printf("\nLine Number : %d", __LINE__);                           /* Will return current line number as a decimal constant. */
    printf("\nIs program compiled by ANSI standards : %d", __STDC__); /* Will return 1 when compiler compiles by ANSI standards. */
    return 0;
}
