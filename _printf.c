#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Returns: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int const = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format)
	{
		if (*format != "%")
		{
			write(1, format, 1);
		}

		format++;
	}

	return (count);
}
