#include "main.h"
/**
 * print_string - print a string.
 * @s: argumen t.
 * Return: the length of the string.
 */

int print_string(va_list list)
{
	int i, len;
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
