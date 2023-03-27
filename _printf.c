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

	/*print values of format string and return number of printed values*/
	count = handle_format_string(format, args);

	va_end(args);/*end va_list*/

	return (count);
}
