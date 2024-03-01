#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints string with format specifiers
 *
 * @format: string containing the format specifier(s)
 *
 * Description: writes output based on a format string that
 * specifies how subsequent arguments are converted for output
 *
 * Return: length of printed string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while(*format != '\0')
	{
		if (*format == '%')
		{
			count += get_print_func(*(++format), args);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
