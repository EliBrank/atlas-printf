# atlas-printf
Recreation of printf variadic function in C \


FILES INCLUDED \

_printf.c \
	int _printf(const char *format, ...); \
_putchar.c \
	int _putchar(char c); \
get_print_func.c \
	int get_print_func(char t, va_list args); \
print_func.c \
	int print_str(char *s); \
	int print_char(char c); \
	int print_percent(void); \
	int print_int(int d); \
main.h \
	includes all functions listed above \
man_3_printf \
