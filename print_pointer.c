#include "main.h"

/**
 * print_pointer - pritns pointer
 * @list: the variable argument list
 * Return: the count of the printed chars
 */
int print_pointer(va_list list)
{
	void *ptr = va_arg(list, void *);
	int rev[32], count = 0, j;
	char hexDigits[] = "0123456789abcdef";

	unsigned long ptr_value = (unsigned long) ptr;

	while (ptr_value != 0)
	{
		rev[count] = hexDigits[ptr_value % 16];
		count++;
		ptr_value /= 16;
	}

	if (count == 0)
	{
		write(1, "(nil)", 5);
		return (0);
	}
	
	write(1, "0x", 2);
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(rev[j]);
	}

	return (count);
}
