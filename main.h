#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

struct format_spec
{
	char type;
	void (*function)(char *);
}

void print_str(char *s);
void print_char(char c);
void print_percent(char percent);

#endif
