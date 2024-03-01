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
		_putchar(s[i]);
		count++;
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
 * @i: int to print
 */
/*
void print_int(int i)
{
	int num;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
}
*/
