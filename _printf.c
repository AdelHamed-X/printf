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
	{"%c", print_char}, {"%s", print_string}, {"%%", print_perc},
	{"%i", print_int}, {"%d", print_int}};

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here
	while (format[ind] != '\0')
	{
		j = 5;
			while (j >= 0 )
			{
				if (all[j].c[0] == format[ind] &&  all[j].c[1] == format[ind + 1])
				{
					count += all[j].f(list);
					ind = ind + 2;
					goto Here
				}
			j--;    }
		_putchar(format[ind]);
		ind++;
		count++; }
		va_end(list);
	return (count);
}
