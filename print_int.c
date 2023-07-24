#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_int - Prints an integer to the standard output (stdout).
 * @value: The integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_int(int value)
{
	char buffer[32];
	int printed = 0;
	int i = 0;
	int j = 0;

	if (value < 0)
	{
		_putchar('-');
		printed++;
		value = -value;
	}
	do {
		buffer[i++] = '0' + (value % 10);
		value /= 10;
		printed++;
	} while (value > 0);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}

	return (printed);
}
