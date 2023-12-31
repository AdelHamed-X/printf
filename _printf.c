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
{	va_list list;
	int count = 0;
	int ind = 0;
	int j = 0;

	main_struct all[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_perc},
		{'i', print_int}, {'d', print_int},  {'b', _putbin}, {'u', print_unsign},
		{'o', print_octal}, {'x', print_hexasmall}, {'X', print_hexalarge},
		{'p', print_pointer}, {'S', print_STRING},
	};

	va_start(list, format);
	if (format == NULL || (format[ind] == '%' && format[ind + 1] == '\0'))
	{	return (-1);
	}
Here:
	while (format[ind])
	{
		j = 0;
		if (format[ind] == '%')
		{	ind++;
				while (j < 12)
			{
				if (all[j].c == format[ind])
				{	count += all[j].f(list);
					ind++;
					goto Here;
				}
				j++; }
			_putchar(format[--ind]);
			_putchar(format[++ind]);
			ind++;
			count += 2;
		} else
		{	_putchar(format[ind]);
			ind++;
			count++; }}
	va_end(list);
	return (count);
}
