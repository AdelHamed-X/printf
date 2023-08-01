#include "main.h"
/**
 * _printhex - prints hex
 * @n: argument to print
 * Return: number of characters printed
 */
void _printhex(int n)
{
 

	if(n > 9)
	{	_putchar(n + 'A');
	}
	else 
	{ 	_putchar(n + '0');
	}

}
