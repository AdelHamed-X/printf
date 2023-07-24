#include <limits.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", "Test error", len);
   	printf("Length:[%d, %i]\n", len2, len2);
    	_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);
   	_printf("Let's try to printf a simple sentence.\n");
    	printf("Let's try to printf a simple sentence.\n");
    	_printf("Character:[%c]\n", 'H');
    	printf("Character:[%c]\n", 'H');
    	_printf("String:[%s]\n", "I am a string !");
    	printf("String:[%s]\n", "I am a string !");
    	_printf("Percent:[%%]\n");
    	 printf("Percent:[%%]\n");
	return (0);
}
