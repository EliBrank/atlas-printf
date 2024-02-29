#include "main.h"
#include <stdlib.h>

/**
 * print_str - prints string
 * @s: string to print
 */
void print_str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

/**
 * print_char - prints char
 * @c: char to print
 */
void print_char(char c)
{
	_putchar(c);
}

/**
 * print_int - prints %
 */
void print_percent(char percent)
{
	_putchar('%');
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
