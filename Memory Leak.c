/*
    In computer science, a memory leak is a type of resource leak that occurs when a computer program incorrectly manages memory allocations in a way that memory which is no longer needed is not released. 

    Memory leak is caused when we don't use dynamic memory properly.
    When we keep on allocating memory in the heap without freeing, the overall memory usage keeps on increasing.
    This situation is the cause of memory leak i.e. the programmer creates a memory block and forgets to delete it.
    To avoid these memory leak situations, memory allocated on heap should always be freed when not needed.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    /* Running infinite loop */
    while (1)
    {
        printf("\nOpen Task Manager and see the memory usage increasing for this program.");
        ptr = malloc(10 * sizeof(int)); /* We are allocating memory here infinite times without freeing the previous one. This will cause memory leak. */
        /* As we have not freed the memory the of ptr, it will keep on increasing on every iteration of loop and memory usage will increase. This is a bad practice and might cause the program to crash. */
        /* free(ptr); This can prevent memory leak as this will free the memory of ptr after every loop iteration. */
    }
    return 0;
}
