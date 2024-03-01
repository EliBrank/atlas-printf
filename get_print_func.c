#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_print_func - gets math operator for two ints
 * @t: char which determines specifier to print
 *
 * Return: pointer to func that corresponds to print specifier, NULL if failure
 */

int (*get_print_func(char t, va_list args))(void *)
{
	int i;

	format_spec spec[] = {
		{'s', (void (*))print_str},
		{'c', (void (*))print_char},
		{'%', (void (*))print_percent},
		/*
		{'i', print_ui},
		{'d', print_int},
		*/
		{0, NULL}
		};

	i = 0;
	while (spec[i].type != 0)
	{
		if (t == *(spec[i].type))
		{
			return (spec[i].function);
		}
		i++;
	}

	return (NULL);
}
