/*
    * Files are used to store data and information.
    * Files are used to read and access data anytime from the storage disk.
    * Files make it easy for a programmer to access and store content without losing it on program termination.
*/

/*
    Volatile Memory is computer memory that only maintain its data while the device is powered. Eg. RAM.
    Non Volatile memory memory that can retain the information even when not powered. Eg. Hard Disk
*/
/*
    When a C program is terminated, data stored in RAM is lost. 
    Storing data in a file will preserve our data even after the program terminates.
    RAM is not able to handle quiet large amount of data due to its small sizee relative to hard disk.
    Files make it easier to transfer data.
*/
/*
    In C, we can perform these operations on files : 
    * Creating a new file
    * Opening a file
    * Reading and writing a file
    * Closing a file
*/

/*
    Working with files in C
    * We start by declaring a pointer of type FILE. -> FILE fptr;
    
    * Then we open a file as shown :
        (a) stdio.h contains a functions called fopen() for opening files in C.
        (b) The standard for opening a file in standard I/O is -> fptr = fopen("fileopen", "mode");
            Eg. fopen("C:\\Users\Mayank Saxena\abc.txt", "w");
            Eg. fopen("C:\\Users\Mayank Saxena\name.bin", "rb"); -> "rb" here is telling that mode is "read binary".
        (c) There are different modes with different abilities :
            "w" -> write
            "r" -> read
            "a" -> append
    
    * Read a file
        (a) In order to read a file we use fscanf() function. This function is a file version of scanf() version.
        (b) fscanf() expects a file pointer in addition to the other arguments which scanf() expects.
        (c) We will have to open a file in read mode in order to use this function.

    * Write a file
        (a) In order to write to a file, we can use fprintf() function. This function is a file version of printf() function.
        (b) fprintf() expects a file pointer in addition to the other arguments which printf() expects.
        (c) We will have to open a file in write mode in order to use this function.
    
    * Then we close the file as shown :
        (a) To close a file we use fclose(fptr); where "fptr" is the pointer we created to open file.
*/
#include <stdio.h> /* sttdio.h contaons file functions */

int main()
{
    FILE *fptr = NULL;
    fptr = fopen("random.txt", "r"); /* Opening a file. Make sure that the file exists in your directory. */
    char str[60];
    fscanf(fptr, "%[^\n]s", str); /* The "%[^\n]s" format specifier allows to read string with spaces until a new line comes. If we we would have used %s here, we would have got only first word of the file as the input would have been terminated when input reached the space character */
    printf("The content in file is -> %s\n", str);

    fptr = fopen("random.txt", "a"); /* Opening file in append mode. We can use "w" to open the file in write mode but we do not want to clear the previous contents of files, so we are opening in append mode. Other working in write and append mode is similar. */
    printf("\nEnter text to input in a file : ");
    scanf("%[^\n]s", &str);
    fprintf(fptr, "%s", str); /* This will append the string provided in file. If the file was opened in write mode, previous text would have been replaced by text in "str" variable. */
    printf("\nContent Added!");
    fclose(fptr); /* Closing a file */
    return 0;
}
