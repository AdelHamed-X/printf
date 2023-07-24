#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, the number of characters written is returned.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	if ((c >= 32 && c <= 126) || (c == '\n'))
	{
		return (write(1, &c, 1));
	}
	else
	{
		perror("Error, invalid Char");
		return -1;
	}
}
