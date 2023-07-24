#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

void _flush_buffer(char *buffer, size_t size);
int _putchar(char);
int _puts(char *);
int _printf(const char *format, ...);
int _putint(int value);

#endif
