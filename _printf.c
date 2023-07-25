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
	
	main_struct all[] = {
	{"%c", print_char}, {"%s", print_string}, {"%%", print_perc},
	{"%i", print_int}, {"%d", print_int}};

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[ind] != '\0')
	{
		if (format[ind] == '%')
		{	ind++;
          		switch (format[ind])
        		{
            			case 'c':
					count += all[0].f(list);
                			break;
            			case 's':
                			count += all[1].f(list);
                			break;
            			case 'd':
            			case 'i':
                			count += all[3].f(list);
                			break;
				case '%':
                                        count += all[2].f(list);
                                        break;
            			default:
					count += _putchar(format[ind]);          
                			break;}
			ind++; }
    		else
    		{	_putchar(format[ind]);
       			ind++;
        		count++; }}
	va_end(list);
	return (count);
}
