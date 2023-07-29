#include "main.h"

/**
 * print_octal - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_octal(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int j, rev[32], count = 0, i = 0;
	int quotient = num;

	for (i = 0; num != 0; i++)
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
		
		for (j = i - 1; j != 0;)
		{
			
			_putchar(rev[j] + '0');
			count++;

			j--;
			}

		_putchar(rev[i] + '0');
		count++;
		
	}

	return (count);
}
