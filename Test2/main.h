#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int print_char(va_list val);
int _printf(const char *format, ...);
int print_s(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_i(va_list args);
int print_d(va_list args);
int print_bin(va_list val);

#endif