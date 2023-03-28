#include "main.h"

/**
 * converter - a function that converts a number and base into string
 * @num: the number to input
 * @base: the base to input
 * @lcase: flag for when hexa values need to be converted to lowercase
 *
 * Return: the resulting string
 */

char *converter(unsigned long int num, int base, int lcase)
{
	static char *inp;
	static char buffer[50];
	char *ptr;

	inp = (lcase) ? "0123456789abcdef" : "0123456789ABCDEF";

	ptr = &buffer[49];

	*ptr = '\0';
	while (num != 0)
	{
		*--ptr = inp[num % base];
		num /= base;
	}

	return (ptr);
}
