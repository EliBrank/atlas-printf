#include "main.h"
#include <stdlib.h>

/**
 * print_str - prints string
 * @s: string to print
 */
int print_str(void *form)
{
	int i;
	int count;
	data *ptr = (data *)form;

	count = 0;
	for (i = 0; ptr->str_data[i] != '\0'; i++)
	{
		_putchar(ptr->str_data[i]);
		count++;
	}

	return (count);
}

/**
 * print_char - prints char
 * @c: char to print
 */
int print_char(void *form)
{
	data *ptr = (data *)form;

	/* prints char and returns 1 */
	return (_putchar(ptr->char_data));
}

/**
 * print_int - prints %
 */
int print_percent(void *form)
{
	data *ptr = (data *)form;

	/* prints percent and returns 1 */
	return (_putchar(ptr->char_data));
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
