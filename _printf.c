#include "main.h"

/**
* _printf - produces output according to a format
*
* @format: character string argument
*
* Return: integer
*/

int _printf(const char *format, ...)
{
	int count;
	channel channel_f[] = {
		{"c", _handle_char},
		{"s", _handle_string},
		{"%", _handle_percent},
		{"d", _handle_decimal},
		{"i", _handle_decimal},
		{"b", _handle_binary},
		/*
		*{"r", _handle_reversed},
		*{"R", _handle_rot13},
		*/
		{"u", _handle_unsigned},
		{"o", _handle_octal},
		{"x", _handle_hex},
		{"X", _handle_HEX},
		{NULL, NULL}
};
	va_list args;/*declare list*/

	if (format == NULL)
		return (-1);
	va_start(args, format); /*start va list*/

	/*print values of format string and return number of printed values*/
	count = handle_format_string(format, channel_f, args);

	va_end(args);/*end va_list*/

	return (count);
}
