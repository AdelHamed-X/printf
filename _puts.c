#include "main.h"
/**
 * _puts - Prints a string to the standard output.
 * @str: Pointer to the string to be printed.
 *
 * Description:
 * This function prints the characters of the given string to
 * the standard output until it reaches the null-terminator.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');
}
