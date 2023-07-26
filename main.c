#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2, len3, len4;

	len3 = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len4 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	fflush(stdout);
	if (len3 != len4)
	{
		printf("%i, %i\n", len3, len4);
		printf("Lengths differ.\n");
		fflush(stdout);
	}

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("%i, %i\n", len, len2);
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
