#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int handle_format_string(const char *format, va_list arg);
#endif
