#include "main.h"
/**
 * _putbin - Prints a binary to the standard output (stdout).
 * @list: The va_list that holds the integer argument.
 *
 * Return: The number of characters printed.
 */
int _putbin(va_list list)
{	long int n = va_arg(list, long int);
	long int div = n;
	long int bit[32];
	int i = 0, j = 0;

	while (div > 0)
	{	bit[i] = div % 2;
		div = div / 2;
		i++;
	}
	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	for (j = i - 1; j >= 0; j--)
	{ _putchar(bit[j] + '0');
	}
	return (i);
}
