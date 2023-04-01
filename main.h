#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
* struct channel - defines structure for format specifier and functions
*
* @fmt_sym: format symbol
* @f: function for associated format symbol
*
*/

typedef struct channel
{
	char *fmt_sym;
	int (*f)(va_list);
} channel;

int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int _decimal(int integer);
int handle_format_string(
const char *format, channel channel_f[], va_list args);

/*cspd formart handlers*/
int _handle_char(va_list args);
int _handle_string(va_list args);
int _handle_percent(va_list args);
int _handle_decimal(va_list args);

/*_uoXX_fmt_handlers*/
int _handle_unsigned(va_list args);
int _handle_octal(va_list args);
int _handle_hex(va_list args);
int _handle_HEX(va_list args);
int _handle_binary(va_list args);

/*_uoxX_func_helpers*/
int _unsignedfn(unsigned int num);
int _octal(unsigned int num);
int _hex(unsigned int num);
int _HEX(unsigned int num);
int _binary(unsigned int num);

/*helpers*/
int _convertdtobaseu(unsigned int num, unsigned int base);
int _convertdtobasel(unsigned int num, unsigned int base);
int _print_unsigned_num(unsigned int num);
#endif
