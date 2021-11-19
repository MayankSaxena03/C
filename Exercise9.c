/*
    Create Rock, Paper & Scissors Game
    Player 1: rock
    Player 2 (computer): scissors -->player 1 gets 1 point

    rock vs scissors - rock wins
    paper vs scissors - scissors wins
    paper vs rock - paper wins

    Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
    Notes: You have to display name of the player during the game. Take users name as an input from the user.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); /* srand() takes seed as a parameter. We pass time() as parameter as time will keep changing. If we pass a constant as argument, then rand() will generate only one value. */
    /*
        After srand(); we can get random values using "rand() % n;" . "rand() % n" will return a random number between [0 , n)
    */

    char name[50];
    int playerScore = 0, computerScore = 0;
    int choice;

    printf("Hello Player! Please enter your name to continue : ");
    scanf("%s", &name);

    for (int i = 0; i < 3; i++)
    {
        printf("\n\n**********************************  Round %d    **********************************\n", i + 1);
        printf("\n1: Rock\n2: Paper\n3: Scissors\nEnter your Choice : ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 3)
        {
            printf("\nInvalid Choice!!!!!!"); /* Will rerun this loop iteration if user input wrong choice */
            i--;
            continue;
        }
        else
        {
            switch (rand() % 3 + 1)
            {
            case 1:
                printf("\nComputer chose Rock");
                if (choice == 1)
                {
                    printf("\nRound is Draw");
                    i--; /* Decrementing i so the round will restarrt until somone wins the round */
                }
                else if (choice == 2)
                {
                    printf("\n%s won this round.", name);
                    playerScore++;
                }
                else
                {
                    printf("\nComputer won this round.");
                    computerScore++;
                }
                break;
            case 2:
                printf("\nComputer chose Paper");
                if (choice == 1)
                {
                    printf("\nComputer won this round.");
                    computerScore++;
                }
                else if (choice == 2)
                {
                    printf("\nRound is Draw");
                    i--;
                }
                else
                {
                    printf("\n%s won this round.", name);
                    playerScore++;
                }
                break;
            case 3:
                printf("\nComputer chose Scissors");
                if (choice == 1)
                {
                    printf("\n%s won this round.", name);
                    playerScore++;
                }
                else if (choice == 2)
                {
                    printf("\nComputer won this round.");
                    computerScore++;
                }
                else
                {
                    printf("\nRound is Draw");
                    i--;
                }
                break;
            default:
                printf("\nProblem with random Value");
                break;
            }
        }
    }

    if (playerScore > computerScore)
    {
        printf("\n\n\n********************************    %s won the game by %d points    ********************************\n\n", name, playerScore - computerScore);
    }
    else
    {
        printf("\n\n\n********************************    Computer won the game by %d points    ********************************\n\n", computerScore - playerScore);
    }

    return 0;
}
