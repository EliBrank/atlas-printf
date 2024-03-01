#include "main.h"
#include <stdlib.h>

/**
 * print_str - prints string
 * @s: string to print
 */
int print_str(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s == (char *)0)
		{
			print_str("(null)");
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}

	return (count);
}

/**
 * print_char - prints char
 * @c: char to print
 */
int print_char(char c)
{
	/* print char and return 1 */
	return (_putchar(c));
}

/**
 * print_int - prints %
 */
int print_percent(void)
{
	/* print % and return 1 */
	return (_putchar('%'));
}

/**
 * print_int - prints int
 * @d: int to print
 */

int print_int(int d)
{
	int count = 0;

	if (d < 0)
	{
		_putchar('-');
		d *= -1;
		count++;
	}
	if (d < 10 && d >= 0)
	{
		_putchar(d + '0');
		count++;
	}
	else
	{
		print_int(d / 10);
		_putchar((d % 10) + '0');
		count++;
	}
	return (count);
}

