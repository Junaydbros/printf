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
	va_list args;/*declare list*/

	if (format == NULL)
		return (-1);
	va_start(args, format); /*start va list*/

	count = handle_format_string(format, args);

	va_end(args);/*end va_list*/

	return (count);
}

/**
* handle_format_specifier - handles format specifier & prints equivalent value
*
* @specifier: the format specifier character
* @args: the va_list object containing the variadic arguments
*
* Return: number of charater printed
*/
int handle_format_string(const char *format, va_list args)
{
	int i = 0, count = 0;
	char *str;

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
					if (str == NULL)
						break;
					count += _puts(str);
					break;
				case '%':
					count += _putchar('%');
					i += 2;
					break;
				case '\0':
					return (-1);
				default:
					count += _putchar(format[i]);
					i += 1;
					break;
				}
		}	
		else
		{
			count += _putchar(format[i]);
			i++;
		}

	}

	return (count);
}
