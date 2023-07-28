#include <limits.h>
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
    unsigned int ui;

     ui = -1024;

    len = _printf("Unsigned:[%u]\n", ui);
   len2 = printf("Unsigned:[%u]\n", ui);

    printf("%i, %i\n", len, len2);
    return 0;
}
