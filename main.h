#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int ant_check(char anterior, char actual, va_list ar);
int per_validation (char actual, va_list ar);
int print_str(char *str);

int _printf(const char *format, ...);
#endif
