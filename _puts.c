#include "main.h"
#include <stdlib.h>

/**
 * _puts - Prints a string to the standard output.
 * @str: Pointer to the string to be printed.
 *
 * Description:
 * This function prints the characters of the given string to
 * the standard output until it reaches the null-terminator.
 */
int _puts(char *str)
{
    char buffer[1024];
    int i, j;

    if (str)
    {
        for (i = 0, j = 0; str[i] != '\0'; i++)
        {
            buffer[j++] = str[i];
            if (j == sizeof(buffer))
            {
                _flush_buffer(buffer, sizeof(buffer));
                j = 0;
            }
        }
        if (j > 0)
        {
            _flush_buffer(buffer, j);
        }
    }

    return i;
}

void _flush_buffer(char *buffer, size_t size)
{
    size_t i;
    for (i = 0; i < size; i++)
    {
        _putchar(buffer[i]);
    }
}
