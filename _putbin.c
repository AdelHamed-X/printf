#include "main.h"

/**
 * _putbin - prints a binary number.
 * @list: arguments.
 * Return: 1.
 */
int _putbin(va_list list)
{
	int cont = 0;
	int flag = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
