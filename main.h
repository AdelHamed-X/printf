#ifndef MAIN_H
#define MAIN_H

	#if (SOME_CONDITION)
    		#error "Some condition is not met. Fix the code before compiling."
	#endif

#include <stdbool.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char);
int _putint(int);
int _puts(char *);
int _printf(const char *format, ...);

#endif
