#include "main.h"

/**
 * _decimal - a function that prints a decimal integer to the standard output
 * @integer: the decimal integer
 *
 * Return: integer, count of printed value
 */

int _decimal(int integer)
{
	int cnt = 0;
	unsigned int num;

	if (integer < 0)
	{
		cnt += _putchar('-');
		integer = integer * -1;
	} /* this takes care of negative decimal integers */
	else
		num = integer;

	if (num / 10)
	{
		cnt += _decimal(num / 10);
	}
	cnt += _putchar((num % 10) + '0');
	/* this removes the last digit with recursion and afterwards prints it */

	return (cnt);
}
