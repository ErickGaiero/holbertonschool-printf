#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int per_validation(char actual, va_list ar);
int print_str(char *str);

int _printf(const char *format, ...);
#endif
