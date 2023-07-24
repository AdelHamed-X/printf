#include "main.h"
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, the number of characters written is returned.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
    static char buffer[BUFFER_SIZE];
    static int pos = 0;

    if (pos == BUFFER_SIZE)
    {
        write(STDOUT_FILENO, buffer, BUFFER_SIZE);
        pos = 0;
    }

    buffer[pos++] = c;

    return 1;
}
