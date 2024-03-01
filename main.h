#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);
int print_str(void *form);
int print_char(void *form);
int print_percent(void *form);
int (*get_print_func(char t, va_list args))(void *);

typedef struct
{
	char type;
	void (*function)(char *);
} format_spec;

typedef union
{
	char *str_data;
	char char_data;
	int int_data;
} data;

#endif
