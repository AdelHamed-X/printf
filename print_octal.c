#include "main.h"

/**
 * print_octal - prints an octal number.
 * @list: argument to print
 * Return: number of characters printed
 */
int print_octal(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int j, rev[32], count = 0, i = 0;
	unsigned int quotient = num;

	
	while (num != 0)
	{
		num /= 8;
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
