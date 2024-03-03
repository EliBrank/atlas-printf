#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(char *s);
int print_char(char c);
int print_percent(void);
int print_int(int d, int count);
int get_print_func(char t, va_list args);

#endif
