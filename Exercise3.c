/* Print fibonacci series with number of terms provided by the user. Write functions for both iterative and recursive approach */

#include <stdio.h>

int recursive_fibonacci(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }
    else
    {
        return (recursive_fibonacci(number - 1) + recursive_fibonacci(number - 2));
    }
}

/*
    In recursive approach of fibonacci, we are finding fibonacci term of a single number many times. It makes this approach slower here. We can notice the difference when we write fibonacci series for a larger term. For example : When we input big number like 45 we can notice that recursive approach is taking so much time compared to iterative approach. 
    It is upto us to decide which approach is better (recursion or iteration) to solve the problem.
*/

void iterative_fibonacci(int number)
{
    int a, b, c;
    if (number == 1)
    {
        printf("0  ");
    }
    else if (number == 2)
    {
        printf("0  1  ");
    }
    else
    {
        a = 0;
        b = 1;
        c = 1;
        printf("0  1  ");
        for (int i = 3; i <= number; i++)
        {
            printf("%d  ", c);
            a = b;
            b = c;
            c = a + b;
        }
    }
}

int main()
{
    int i = 0, number;
    printf("Enter number of terms in fibonacci series : ");
    scanf("%d", &number);
    printf("\nRecursive Series : ");
    for (int c = 1; c <= number; c++)
    {
        printf("%d  ", recursive_fibonacci(i));
        i++;
    }
    recursive_fibonacci(number);
    printf("\nIterative Series : ");
    iterative_fibonacci(number);
    return 0;
}
