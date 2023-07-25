#include "main.h"
/**
 * _puts - print a string.
 * @s: argumen t.
 * Return: the length of the string.
 */

int _puts(char *s)
{
	int i, len;

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
