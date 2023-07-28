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



    len = _printf("Unsigned:[%o]\n", 4294967295);
   len2 = printf("Unsigned:[%o]\n", 567);

    printf("%i, %i\n", len, len2);
    return 0;
}


