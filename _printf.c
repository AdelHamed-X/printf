#include "main.h"

/**
 * _printf - prints anything
 * @format: the string to be formatted
 * Return: (printed) the numeber of printed characters
 */
int _printf(const char *format, ...)
{
	int i = 0, printed = 0, va_arg3;
	va_list list;
	char *va_arg2;

	va_start(list, format);
	while (!format)
	{	perror("Error: String pointer points to NULL \n");
		return (-1);
	} while (format[i])
	{
		if (format[i] != '%')
		{	_putchar(format[i]);
			printed++;
		} else if (format[i] == '%')
		{	i++;
			switch (format[i])
			{
				case 'c':
					_putchar((va_arg(list, int)));
					printed++;
					break;
				case 's':
					va_arg2 = va_arg(list, char *);
					printed += _puts(va_arg2);
					break;
				case '%':
					_putchar(format[i]);
					printed++;
					break;
				case 'i':
				case 'd':
					va_arg3 = va_arg(list, int);
					printed += _putint(va_arg3);
					break;
			}
		} i++;	}
	va_end(list);
	return (printed);
}
