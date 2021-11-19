/*
    Sometimes we need to pass arguments from command line to the program. We use command line arguments in that case.
    Command line arguments are passeed to main() function.
    These arguments are used to control program from the console.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* argc contains number of arguments passed using command line. Default value of argc is 1 because first argument is program's name. argv[] contains the arguments. At index zero, name of the program is present.*/
    printf("Number of arguments : %d\n", argc);    /* This will print number of arguments passed + 1 */
    printf("Name of the program : %s\n", argv[0]); /* This will print name of the program */
    /* Printing all other arguments */
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}

/*
    You can pass arguments to the program like this -> .\a.exe arg1 arg2 arg3 ...
*/