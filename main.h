#ifndef HEAD_H
#define HEAD_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int con_func(va_list args, char inp);
int print_c(char a);
int print_i(int n);
int put_str(char *str);

#endif
