#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);

struct format_spec
{
	char type;
	void (*function)(char *);
}

#endif
