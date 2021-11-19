#include <stdio.h>
#include <string.h> /* Header file to include string functions */

int main()
{
    char s1[] = "Mayank";
    char s2[] = "Saxena";
    char s3[] = "mayank";
    char s4[20];

    printf("Comparing s1 and s2 with case sensitivity : %d\n", strcmp(s1, s3));  /* If the string is same when considering case sensitive strcmp() will return 0. It will return a positive number if ascii difference of first unmatching character of s3 and s1 is positive, else it will return a negative number. */
    printf("Comparing s1 and s2 with case sensitivity : %d\n", strcmpi(s1, s3)); /* It is same as above but it will not consider uppercase and lowercase. */

    printf("The addition of string s1 & s2 is: ");
    puts(strcat(s1, s2)); /* This function will change value of actual variable. */

    printf("The length of s1 is %d\n", strlen(s1)); /* Method to find length of string. */
    printf("The length of s2 is %d\n", strlen(s2));

    strcpy(s4, strcat(s1, s2)); /* Method to copy a string into another string */
    puts(s4);

    printf("The reversed string s1 is: ");
    puts(strrev(s1)); /* Reversing a string. This function will change value of actual variable. */
    printf("The reversed string s2 is: ");
    puts(strrev(s2));

    return 0;
}
