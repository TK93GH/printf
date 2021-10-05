#ifndef MAIN_H
#define MAIN_H

/* needed header files for printf */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* given prototype for printf */
int _printf(const char *format, ...);

/* external prototype functions */
int *print_char(va_list list);
char *print_str(va_list list);
char *print_i(int len, int n, int div);
int *print_dec(va_list list);
char *print_octal(va_list list);
char* (*get_func(char i))(va_list);
char *print_rev(va_list list);
char *itob(va_list list);

#endif
