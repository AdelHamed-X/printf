#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int ui;
	int len, len2;
	long int res = INT_MAX;

	ui = 1024;
	res *= 2;
	len = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);

	_printf("%o\n", -1024);
	_printf("%o\n", UINT_MAX);
	_printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	_printf("%x\n", -1024);
	_printf("%x\n", UINT_MAX);


	printf("%o,%o\n", len, len2);

	return (0);
}
