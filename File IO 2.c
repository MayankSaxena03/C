/*
    File Modes :

    * r -> Opens an existing text file for reading.
    * w -> Opens a file for writing. If the file doesn't exist, a new file is created. Writing starts from the beginning of the file.
    * a -> Opens a file for writing in append mode. If the file doesn't exist, a new file is created. The program will start appending content to the existing file content.
    * r+ -> This will open file for both reading and writing. If something is written, then that content will be added in beginning of the file. For example : If file has "Hello" in it and we write "Mayank" using code, the file will now be "MayankHello".
    * w+ -> This will open file for both reading and writing. It first truncates file to zero length if it exists, otherwise creates a file if it does not exist.
    * a+ -> This will open file for both reading and writing. It creates the file if it does not exist. The reading will start from beginning of the file but writing can only append to file.
*/
/*
    File IO Functions :
    There are various functions provided by C statndard library to read and write a file, character by character, or in the form of a fixed kength string.
    
    Some of the funtions are : 

    * fputc
        Simplest function to write characters to a file is fputc.
        Syntax of fputc :
            int fputc(character, FILE Pointer);
        It returns the written character written on success.
        On failure it returns EOF.
        The EOF is a constant defined in the header file stdio.h

    * fputs
        fputs is used to write a null terminated string to a file in C.
        Syntax of fputs :
            int fputs(const char *s, FILE *fp);
            First argument is the null terminated string and second argument is the FILE Pointer.
    
    * fgetc
        Simplest function to reaf characters to a file is fgetc.
        Syntax of fgetc :
            int fgetc(FILE Pointer);
        It returns the read character on success.
        On failure it returns EOF.

    * fgets
        fgets is used to read a null terminated string to a file in C.
        Syntax of fgets :
            int fgets(const char *s, int n, FILE *fp);
            First argument is the null terminated string, second argument is the number of characters we want to read and third argument is the FILE Pointer.
            Second argument should consist space for null character. So if we want to read 5 characters from file, we should pass 6 as the second argument.
            fgets will store all the characters in char *s, i.e the first argument.
    
*/

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;

    /* fgetc */
    ptr = fopen("random2.txt", "r");
    char c = fgetc(ptr); /* This will read first character in file random2.txt */
    printf("The first character i read was \'%c\'.\n", c);
    c = fgetc(ptr); /* This will now read the second character in file random2.txt. Every time we run this function it will read the next character.*/
    printf("The second character i read was \'%c\'.\n", c);
    fclose(ptr); /* Closing the File */

    printf("\n"); /* Line Break */

    /* fgets */
    ptr = fopen("random2.txt", "r");
    char str[6];
    fgets(str, 6, ptr); /* This will store string of first 5 characters in str. */
    printf("The first string i read was \"%s\".\n", str);
    fgets(str, 6, ptr); /* This will now store string of next 5 characters in str. */
    printf("The second string i read was \"%s\".\n", str);
    fclose(ptr); /* Closing the File */

    printf("\n"); /* Line Break */

    /*fputc*/
    ptr = fopen("random2.txt", "a"); /*Opening in append mode instead of write mode, so previous content does not get cleared. */
    fputc(' ', ptr);                 /* This will add space character in file. */
    fputc('M', ptr);                 /* This will add 'M' in file. */
    printf("Added a space character \' \' and \'M\' in file.\n");
    fclose(ptr); /* Closing the File */

    printf("\n"); /* Line Break */

    /*fputs*/
    ptr = fopen("random2.txt", "a");
    fputs(" Added this string using program.", ptr);
    printf("Added a string in file using fputs.\n");
    fclose(ptr); /* Closing the File */

    return 0;
}
