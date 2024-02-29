#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
void print_str(char *s);
void print_char(char c);
void print_percent(char percent);
int (*get_print_func(char t, va_list args))(void *);

struct format_spec
{
	char type;
	void (*function)(char *);
};

#endif
