#include "main.h"

/**
 * print_octal - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_octal(va_list list)
{
	int num = va_arg(list, int);
	int j, rev[32], count = 0, i = 0;
	int quotient = num;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	for (i = 0; num > 0; i++)
	{
		rev[i] = quotient % 8;
		quotient = num / 8;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(rev[j] + '0');
			count++;
		}
	}

	return (count);
}
