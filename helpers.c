#include "main.h"

/**
* _print_unsigned_num - print integer one bit at a time
*
* @num: integer number to be printed
*
* Return: cont of number printed
*/

int _print_unsigned_num(unsigned int num)
{
	int count = 0;

	/*print minus if number is negative*/

	/*return error if number is not valid*/

	if (num > 9)
	{
		count += _print_unsigned_num(num / 10);
	}

	count += _putchar((num % 10) + '0');

	return (count);
}


/**
* _convertdtobaseu - convert decimal number
* to desired base and print result in uppercase
*
* @num: decimal number to be converted
* @base: desired base number to be converted to
*
* Return: count of printed number
*/

int _convertdtobaseu(unsigned int num, unsigned int base)
{
	int count = 0;
	char base_digits[] = "0123456789ABCDEF";

	/*return error if base is not valid*/
	if (base < 2 || base > 16)
		return (-1);
	/*convert and print*/
	if (num >= base)
	{
		count += _convertdtobaseu((num / base), base);
		num = num % base;
	}

	count += _putchar(base_digits[num]);

	return (count);
}


/**
* _convertdtobasel - convert decimal number
* to desired base and print result in lowercase
*
* @num: decimal number to be converted
* @base: desired base number to be converted to
*
* Return: count of printed number
*/

int _convertdtobasel(unsigned int num, unsigned int base)
{
	int count = 0;
	char base_digits[] = "0123456789abcdef";

	/*return error if base is not valid*/
	if (base < 2 || base > 16)
		return (-1);
	/*convert and print*/
	if (num >= base)
	{
		count += _convertdtobasel((num / base), base);
		num = num % base;
	}

	count += _putchar(base_digits[num]);

	return (count);
}
