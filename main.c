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


    len = _printf("Unsigned:[%o]\n", UINT_MAX);
   len2 = printf("Unsigned:[%o]\n", UINT_MAX);

    printf("%i, %i\n", len, len2);
    return 0;
}
