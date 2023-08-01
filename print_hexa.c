#include "main.h"

/**
 * print_hexa - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_hexa(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int j, rev[32], count = 0;
	char hexDigits[] = "0123456789ABCDEF";

	while (num != 0)
	{	
		rev[count] = hexDigits[num % 16];
		count++;
		num /= 16;
	}


	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for(j = count - 1;j >= 0;j--)
		{
			_putchar(rev[j]);
		}
	}

	return (count);
}
