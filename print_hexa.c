#include "main.h"

/**
 * print_hexa - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_hexa(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int j, rev[32], count = 0, i = 0;
	int quotient = num;

	while (num != 0)
	{	num /= 16;
		count ++;
	}
	
	for (i = 0; i < count; i++)
	{
		rev[i] = quotient % 16;
		quotient = num / 16;
	}


	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for(j = i - 1; j = 0; j--)
		{
			 _printhex(rev[j]);
		}
	}

	return (count);
}
