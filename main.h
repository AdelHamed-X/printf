#ifndef MAIN_H
#define MAIN_H

/**
 * struct format - a structure that maps a specifier
 *
 * @c: the conversion specifier character
 * @f: a pointer to the function that handles the conversion specifier
 */
typedef struct format
{
	char c;
	int (*f)();
} main_struct;

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int _strlenc(const char *s);
int _strlen(char *s);
void _flush_buffer(char *buffer, size_t size);
int _putchar(char);
int print_string(va_list);
int _printf(const char *format, ...);
int print_int(va_list);
int print_perc(void);
int print_char(va_list);
int _putbin(va_list list);
int print_unsign(va_list list);
int print_octal(va_list list);
void _printhex(int n);
int print_hexasmall(va_list list);
int print_hexalarge(va_list list);
int print_pointer(va_list list);

#endif
