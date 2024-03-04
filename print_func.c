#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

/**
 * print_str - prints string
 * @s: string to print
 *
 * Return: sends back updated print count
 */
int print_str(char *s)
{
	int i;
	int count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}

	return (count);
}

/**
 * print_char - prints char
 * @c: char to print
 *
 * Return: sends back updated print count
 */
int print_char(char c)
{
	/* print char and return 1 */
	return (_putchar(c));
}

/**
 * print_percent - prints %
 *
 * Return: sends back updated print count
 */
int print_percent(void)
{
	/* print % and return 1 */
	return (_putchar('%'));
}

/**
 * print_int - prints int
 * @d: int to print
 *
 * Return: sends back updated print count
 */

int print_int(int d)
{
	int div = 1;
	int digit_count = 1;
	bool minCase = false;
	int count = 0;

	if (d == INT_MIN)
		minCase = true;

	if (minCase)
		d++;

	if (d < 0)
	{
		count++;
		_putchar('-');
		d *= -1;
	}
	while (div <= d / 10)
	{
		digit_count++;
		div *= 10;
	}
	count += digit_count;
	while (digit_count > 0)
	{
		if (minCase && digit_count == 1)
			d++;
		_putchar((d / div) + '0');
		d %= div;
		div /= 10;
		digit_count--;
	}
	return (count);
}
