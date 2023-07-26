#include "main.h"

/**
 * print_char - prints a character
 * @list: the variable arg list
 * Return: 0 Alwys
 */
int print_char(va_list list)
{
	char c;
	int count = 0;

	c = va_arg(list, int);

	_putchar(c);
	count++;
	return (count);
}
