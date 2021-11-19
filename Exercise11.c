/*
    Create a function in which you will pass the number as an argument and the function return whether the number is palindrome or not.
    Take the integer input from the user using scanf() statement. If the number is a palindrome, the message should display on the screen that “This number is a palindrome”.
*/

#include <stdio.h>
#include <stdbool.h> /* To include Boolean */

/* Function that returns boolean true if number is palindrome, else it returns false. */
bool isPalindrome(int num)
{
    int rev = 0, number = num;
    while (number != 0)
    {
        rev = rev * 10;
        rev = rev + number % 10;
        number = number / 10;
    }
    return (rev == num) ? true : false; /* Using conditional operator to return true or false */
}

int main()
{
    int num;
    printf("Enter the number to check if it is palindrome : ");
    scanf("%d", &num);
    if (isPalindrome(num))
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }
    return 0;
}
