#include "main.h"
/**
<<<<<<< HEAD:_puts.c
 * _puts - Prints a string to the standard output (stdout).
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */

int _puts(char *str)
=======
 * print_string - print a string.
 * @s: argumen t.
 * Return: the length of the string.
 */

int print_string(va_list list)
>>>>>>> Adel:print_string.c
{
	int i, len;
	char *s;

	s = va_arg(list, char *);

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
