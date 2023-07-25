#include "main.h"
/**
 * _puts - Prints a string to the standard output (stdout).
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */

int _puts(char *str)
{
	int i, len;

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
