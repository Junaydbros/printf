#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct flags - structure containing flags to activate when a flag specifier
 * is passed to the _printf function
 * @add: a flag for the '+' character
 * @space: a flag for the ' ' character
 * @hash: a flag for '#' character
 */

typedef struct flags
{
	int add;
	int space;
	int hash;
} flags_t;

int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int handle_format_string(const char *format, va_list arg);

int conversion_specifiers_d_i(va_list args, flags_t *s);
void print_number(int n);
int digit_num(int n);
int unsigned_int(va_list a, flags_t *s);
char *converter(unsigned long int num, int base, int lowercase);

#endif
