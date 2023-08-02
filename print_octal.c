#include "main.h"

/**
 * print_octal - prints an octal number.
 * @list: argument to print
 * Return: number of characters printed
 */
int print_octal(va_list list)
{
	int num = va_arg(list, int);
	int j, rev[32], count = 0, i = 0;
	int quotient = (num < 0) ? -num : num;

	while (num != 0)
	{	num /= 10;
		count++;
	}
	for (i = 0; i < count; i++)
	{
		rev[i] = quotient % 8;
		quotient /= 8;
	}

	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (j = count - 1 ; j >= 0; j--)
		{
			_putchar(rev[j] + '0');
		}
	}

	return (count);
}
