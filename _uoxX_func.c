#include "main.h"

/**
* _unsignedfn - converts signed decimal (base 10) number to unsigned
* decimal number and print it
*
* @num: decimal number to be converted
*
* Return: returns count of printed number
*/

int _unsignedfn(unsigned int num)
{
	int count = 0;
	unsigned int zero = 0;

	/*return error if num is less than 1*/
	if (num < zero)
		return (-1);
	/*print num*/
	count += _print_unsigned_num(num);

	return (count);
}

/**
* _octal - print a number in octal (base 8)
*
* @num: number to be printed
*
* Return: returns count of printed number
*/

int _octal(unsigned int num)
{
	int count = 0;
	unsigned int base = 8;
	unsigned int zero = 0;

	/*return error if number is not valid*/
	if (num == zero)
	{
		count += _putchar('0');
		return (count);
	}
	if (num < 1)
		return (-1);
	/*print number in base 8*/
	count += _convertdtobasel(num, base);

	return (count);
}


/**
* _hex - print a number in octal (base 16)
*
* @num: number to be printed
*
* Return: returns count of printed number
*/

int _hex(unsigned int num)
{
	int count = 0;
	unsigned int base = 16;
	unsigned int zero = 0;

	/*return error if number is not valid*/
	if (num == zero)
	{
		count += _putchar('0');
		return (count);
	}
	if (num < 1)
		return (-1);
	/*print number in base 8*/
	count += _convertdtobasel(num, base);

	return (count);
}

/**
* _HEX - print a number in octal (base 16)
*
* @num: number to be printed
*
* Return: returns count of printed number
*/

int _HEX(unsigned int num)
{
	int count = 0;
	unsigned int base = 16;
	unsigned int zero = 0;

	/*return error if number is not valid*/
	if (num == zero)
	{
		count += _putchar('0');
		return (count);
	}
	if (num < 1)
		return (-1);
	/*print number in base 8*/
	count += _convertdtobaseu(num, base);

	return (count);
}

/**
* _binary - print a number in binary (base 2)
*
* @num: number to be printed
*
* Return: returns count of printed number
*/

int _binary(unsigned int num)
{
	int count = 0;
	unsigned int base = 2;
	unsigned int zero = 0;

	/*return error if number is not valid*/
	if (num == zero)
	{
		count += _putchar('0');
		return (count);
	}
	if (num < 1)
		return (-1);
	/*print number in base 8*/
	count += _convertdtobasel(num, base);

	return (count);
}
