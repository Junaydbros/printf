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

	while (format[i])
	{
		if (format[i] == '%')
		{
			/*start va list*/
			va_start(args, format);
			/*return variadic arguments*/
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(args, int));
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
				default:
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
