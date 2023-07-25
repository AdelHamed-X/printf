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
		{'i', print_int}, {'d', print_int}
	};

	if (!format)
		return (-1);
	va_start(list, format);

	while (format[ind])
	{
		j = 0;
		if (format[ind] == '%')
		{	if (format[ind + 1] == '\0')
			{	count += print_perc();
			} else
			{
				ind++;
				while (j < 5)
				{
					if (all[j].c == format[ind])
					{
						count += all[j].f(list);
						ind++;
					}
					else
					{
						_putchar(format[ind]);
						ind++;
						count++; }
					j++; }}
			else
			{	_putchar(format[ind]);
				ind++;
				count++; }}
	va_end(list);
	return (count);
}
