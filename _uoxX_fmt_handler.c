#include "main.h"

/**
* _handle_unsigned - handles unsigned format specifier
*
* @args: va_list arguments list
*
* Return: count
*/

int _handle_unsigned(va_list args)
{
	int count = 0;

	return (count += _unsignedfn(va_arg(args, unsigned int)));
}

/**
* _handle_octal - handles octal format specifier
*
* @args: va_list arguments list
*
* Return: count
*/

int _handle_octal(va_list args)
{
	int count = 0;

	return (count += _octal(va_arg(args, int)));
}


/**
* _handle_hex - handles hex format specifier
*
* @args: va_list arguments list
*
* Return: count
*/

int _handle_hex(va_list args)
{
	int count = 0;

	return (count += _hex(va_arg(args, int)));
}


/**
* _handle_HEX - handles HEX format specifier
*
* @args: va_list arguments list
*
* Return: count
*/

int _handle_HEX(va_list args)
{
	int count = 0;

	return (count += _HEX(va_arg(args, int)));
}

/**
* _handle_binary - handles binary format specifier
*
* @args: va_list arguments list
*
* Return: count
*/

int _handle_binary(va_list args)
{
	int count = 0;

	return (count += _binary(va_arg(args, int)));
}
