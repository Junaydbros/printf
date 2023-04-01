#include "main.h"
#include <stdarg.h>

/**
* handle_format_string - handles format string and prints equivalent
* format specifier value
*
* @format: the format string
* @args: the va_list object containing the variadic arguments
* @channel_f: array of struct type channel
*
* Return: number of charater printed
*/

int handle_format_string(const char *format, channel channel_f[], va_list args)
{
	int j, value, i = 0, count = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{

			for (j = 0; channel_f[j].fmt_sym != NULL; j++)
			{
				if (format[i + 1] == channel_f[j].fmt_sym[0])
				{
					value = channel_f[j].f(args);
					if (value == -1)
						return (-1);
					count += value;
					break;
				}
			}
			if (channel_f[j].fmt_sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					count += _putchar(format[i]);
					count += _putchar(format[i + 1]);
				}
				else
				{
					return (-1);
				}
			}
			i += 2;
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}

	return (count);
}
