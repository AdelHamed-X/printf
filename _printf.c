#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - Custom printf function for formatted output.
 * @format: Format string with supported specifiers.
 *
 * Description:
 * This function prints formatted output to the standard output.
 * Supported specifiers: %c, %s, %d/%i, %u, %x, %X, %%.
 *
 * Return: Number of characters printed (success), -1 on error.
 *
 * Note: Simplified version for educational purposes.
 */
int _printf(const char *format, ...)
{	va_list args;
	int count = 0;
	int ind = 0;

	if (format == NULL || (format[ind] == '%' && format[ind + 1] == '\0'))
	return (-1);
	va_start(args, format);
	while (format[ind])
	{
		if (format[ind] == '%')
		{	ind++;
			if (format[ind] == '%')
			{	_putchar(format[ind]);
				count++;
				ind++;	}
			else if (format[ind] == 'c')
			{	_putchar((va_arg(args, int)));
				ind++;
				count++; }
			else if (format[ind] == 's')
			{	count += _puts(va_arg(args, char *));
				ind++; }
			else if (format[ind] == 'd' || format[ind] == 'i')
			{	count += _putint(va_arg(args, int));
				ind++; }}
		else
		{	_putchar(format[ind]);
			ind++;
			count++; }}
		va_end(args);
	return (count);
}
