#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

int pchar(char c);
int _printf(const char *format, ...);
int pint (int num);
int funcHandle(va_list args, char han);
#endif
