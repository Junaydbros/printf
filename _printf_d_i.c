#include "main.h"

/**
 * conversion_specifiers_d_i - handles conversion specifiers d & i then prints
 * equivalent format specifier value.
 * @s: the pointer to the struct flags that determines if a flag is passed
 * @args: the variable list object containing the variadic arguments
 *
 * Return: the values printed
 */
int conversion_specifiers_d_i(va_list args, flags_t *s)
{
	int i, result;

	i = va_arg(args, int);
	result = digit_num(i);

	if (s->space == 1 && s->add == 0 && i >= 0)
	{
		result += _putchar(' ');
	}
	if (s->add == 1 && i >= 0)
	{
		result += _putchar('+');
	}
	if (i <= 0)
	{
		result++;
	}
	print_number(i);

	return (result);
}

/**
 * print_number - a function that helps to loop through printing of an integers
 * the function prints all the digits
 * @n: the integer to be printed
 *
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

/**
 * digit_num - a function that returns the number of digits in an integer
 * @n: the integer to be evaluated
 *
 * Return: the number of digits
 */

int digit_num(int n)
{
	unsigned int f, k;

	if (n < 0)
	{
		k = n * -1;
	}
	else
	{
		k = n;
	}

	f = 0;
	while (k != 0)
	{
		k /= 10;
		f++;
	}

	return (f);
}

/**
 * unsigned_int - a function that prints an unsigned integer
 * @a: variable list of arguments from _printf
 * @b:pointer to the struct flags that determines if a flag is passed to printf
 *
 * Return: the unsigned integer printed
 */

int unsigned_int(va_list a, flags_t *s)
{
	unsigned int u = va_arg(a, unsigned int);
	char *str = converter(u, 10, 0);

	(void)s;

	return (_puts(str));
}
