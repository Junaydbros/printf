#include "main.h"

/**
* _handle_char - print character specifier value
*
* @args: list of passed argument
*
* Return: count of printed value
*/

int _handle_char(va_list args)
{
	int count = 0;

	count += _putchar(va_arg(args, int));
	return (count);
}

/**
* _handle_string - print string specifier value
*
* @args: list of passed argument
*
* Return: count of printed value
*/

int _handle_string(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	count += str == NULL ? _puts("(null)") : _puts(str);
	return (count);
}

/**
* _handle_percent - print percent
*
* @args: list of passed argument
*
* Return: count of printed value
*/

int _handle_percent(__attribute__((unused))va_list args)
{
	int count = 0;

	count += _putchar('%');
	return (count);
}

/**
* _handle_decimal - print decimal specifier value
*
* @args: list of passed argument
*
* Return: count of printed value
*/

int _handle_decimal(va_list args)
{
	int count = 0;

	count += _decimal(va_arg(args, int));
	return (count);
}
