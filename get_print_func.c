#include "main.h"

/**
 * get_print_func - gets math operator for two ints
 * @t: char which determines specifier to print
 *
 * Return: pointer to func that corresponds to print specifier, NULL if failure
 */

int (*get_print_func(char t, va_list args))(void *)
{
	int i;

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

	i = 0;
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
