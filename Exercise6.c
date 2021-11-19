/*
    Parse HTML into plain text.
    Example :
        Input : <h1>Hello World</h1>
        Output : Hello World

        Input : <h1>        Hello World     </h1>
        Output : Hello World 
*/

#include <stdio.h>

void Parser(char str[])
{
    int i = 0;
    char html[50];
    int j = 0;
    while (str[i] != '\0')
    {
        /* For removing Tags */
        if (str[i] == '<')
        {
            while (str[i] != '>')
            {
                i++;
            }
        }
        /* For removing extra spaces */
        else if (str[i] == ' ')
        {
            if (str[i - 1] != '>' && str[i + 1] != '<')
            {
                html[j] = str[i];
                j++;
            }
            while (str[i] == ' ')
            {
                i++;
            }
            if (str[i] == '<')
            {
                j--;
            }
            continue;
        }
        /* Adding Plain text */
        else
        {
            html[j] = str[i];
            j++;
        }
        i++;
    }
    html[j] = '\0';
    puts(html);
}

int main()
{
    char str[50];
    printf("Please enter the text in HTML : ");
    /* scanf(" %s", &str); This will end the string when space character ' ' is found. */
    gets(str);
    Parser(str);

    return 0;
}