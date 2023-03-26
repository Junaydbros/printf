#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	len += _printf("Character:[%c]\n", 'H');
	len2 += printf("Character:[%c]\n", 'H');
	len += _printf("String:[%s]\n", "I am a string !");
	len2 += printf("String:[%s]\n", "I am a string !");

	printf("_printf count = %d\nprintf count = %d\n", len, len2);

	return (0);
}
