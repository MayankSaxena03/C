/* 
    * String is an array of characters in C. 
    * String is terminated by null character '\0'
    * We will need to create a character array of size "length+1" to accomodate null character.
*/

#include<stdio.h>

void printString(char array[]) {
    int i = 0;
    while (array[i] != '\0')
    {
        printf("%c", array[i]);
        i++;
    }
}

int main()
{
    char str[] = {'M', 'a', 'y', 'a', 'n', 'k', '\0'}; /* Adding null characyer '\0' at the end of array to terminate the string. */
    printString(str);

    printf("\n");

    char str2[] = "Mayank"; /* We can declare string like this too. We have not used null character at the end because if we declare string like this, compiler will automatically add a null character at its end. */
    printString(str2);

    printf("\n");

    char str3[6] = "Mayank"; /* We have given size of 6 characters to the array but this won't leave space to add null character in the end. This will print string in wrong way. So, we should use minimum size of "length+1" while declaring string. */
    printString(str3);

    printf("\n");

    /* We can ask user to input string in below given way */
    char str4[20];
    printf("Enter string : ");
    gets(str4); /* Null character will bbe added by compiler. */
    printf("Your input was ");
    puts(str4);

    printf("\n");

    /* We can also input and print string using below methods */
    char str5[20];
    printf("Enter string : ");
    scanf("%s", &str5); /* Null character will bbe added by compiler. */
    printf("Your input was %s", str5); /* We can print string using this way too. */
    
    return 0;
}
