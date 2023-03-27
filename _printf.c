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
	int i = 0, count = 0;
	char *str;
	va_list args;/*declare list*/

	format == NULL ? return (-1) : i = i;
	va_start(args, format); /*start va list*/
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1]) /*return variadic arguments*/
			{
				case 'c':
					count += (char)_putchar(va_arg(args, int));
					i += 2;
					break;
				case 's':
					i += 2;
					str = va_arg(args, char *);
					str == NULL ? break : i = i;
					count += _puts(str);
					break;
				case '%':
					count += _putchar('%');
					i += 2;
					break;
				default:
					count += _putchar(format[i]);
					i += 1;
					break;
			}
		}
		else
		{
			format[i] != '\0' ? count += _putchar(format[i]) : i = i;
			i++;
		}
	}
	va_end(args);/*end va_list*/
	return (count);
}
