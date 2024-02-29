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
	int count;

	while(*format != '\0')
	{
		if (*format == '%')
		{
			count++;
			get_print_func(*(format++));
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
}
