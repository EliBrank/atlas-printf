#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_print_func - gets math operator for two ints
 * @t: char which determines specifier to print
 * @args: brings in arguments from variadic func
 *
 * Return: pointer to func that corresponds to print specifier, NULL if failure
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
		case ' ':
		case '\0':
			return (_putchar(-1));
		default:
			return (_putchar('%') + _putchar(t));
	}
}
