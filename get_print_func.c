#include "main.h"
#include <stdarg.h>

/**
 * get_print_func - gets print function based on the format specifier
 * @t: char which determines specifier to print
 * @args: brings in arguments from variadic func
 *
 * Return: updated count provided by print function called
 */

int get_print_func(char t, va_list args)
{
	switch (t)
	{
		case 's':
			return (print_str(va_arg(args, char *)));
		case 'c':
			return (print_char(va_arg(args, int)));
		case '%':
			return (print_percent());
		case 'i':
		case 'd':
			return (print_int(va_arg(args, int)));
		default:
			return (_putchar('%') + _putchar(t));
	}
}
