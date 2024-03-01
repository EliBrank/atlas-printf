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
	int count;

	count = 0;
	struct format_spec spec[] = {
		{'s', print_str},
		{'c', print_char},
		{'%', print_percent},
		/*
		{'i', print_ui},
		{'d', print_int},
		*/
		{NULL, NULL}
		};

	switch (t)
	{
		case 's':
			count += print_str(va_arg(args, char *));
		case 'c':
			count += print_char(va_arg(args, int));
		case '%':
			count += print_percent(va_arg(args, int));
		case 'i':
		case 'd':
	}


	while (spec[i].type != NULL)
	{
		if (t == *(spec[i].type))
		{
			return (spec[i].function);
		}
		i++;
	}

	return (NULL);
}
