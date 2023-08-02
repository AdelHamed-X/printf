#include "main.h"
/*
 * print_STRING - Prints a string with \x.
 * @list: The string to be printed.
 *
 * Return: The number of characters printed.
 *     
 */
int print_STRING(va_list list)
{
	int i, len;
	char *s;
	const char hexDigits[] = "0123456789ABCDEF";
	unsigned char asciiValue;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
			return (len);
		}}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{	
			if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
			{
				asciiValue = (unsigned char)s[i];
				_putchar('\\');
				_putchar('x');
				_putchar(hexDigits[(asciiValue >> 4) & 0xF]);
				_putchar(hexDigits[asciiValue & 0xF]);
			}
			else
			{
				_putchar(s[i]);
                            				
			}
		}
	}
	return (len);
}
