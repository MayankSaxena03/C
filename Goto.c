/*
    *goto statements are used to go to a certain point in program. It is not recommended to use
*/

#include <stdio.h>

int main()
{
    printf("Hello World");
    int num;
    for (int i = 1; i <= 5; i++)
    {
        printf("Case %d : \n", i);
        for (int j = 1; j <= 5; j++)
        {
            printf("Enter a number. Enter 3 to end the loop : ");
            scanf("%d", &num);
            if (num == 3)
            {
                goto end;
                /* Above line will search for label "end" and will take us to that point in program. Here we came out of the nested loop. If we would have used break then we would have came out of a single loop but here we have jumped out of both the loops at once. */
            }
        }
    }
    end: /* Program will reach to this point when we use goto end; */
    printf("You are out of loop");
    return 0;
}
