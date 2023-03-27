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
	/*declare list*/
	va_list args;

	if (format == NULL)
		return (-1);
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
					count += _puts(va_arg(args, char *));
					i += 2;
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
			continue;
		}
		/*print value if its not a format specifier*/
		count += _putchar(format[i]);
		i++;
	}
	/*end va_list*/
	va_end(args);
	/*print null character*/
	_putchar('\0');
	return (count);
}
