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
		{
			ind++;
		switch (format[ind])
		{	case '%':
			{
				if (format[ind] == '%')
				{	count += _putchar(37);
					ind++; }
				break; } case 'c':
			{	count += _putchar((va_arg(args, int)));
				ind++;
				break; } case 's':
			{	count += _puts(va_arg(args, char *));
				ind++;
				break; } case 'i':
			case 'd':
			{	count += _putint(va_arg(args, int));
				ind++;
				break; } default:
			{	count += _putchar(format[--ind]);
				count += _putchar(format[++ind]);
				ind++;
				break; }}}
		else
		{	_putchar(format[ind]);
			ind++;
			count++; }}
		va_end(args);
	return (count);
}
