#include "main.h"

/**
 * print_unsign - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_unsign(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int j, rev[32], count = 0, i = 0;

	while (num > 0)
	{
		rev[i] = num % 10;
		i++;
		num /= 10;
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
