#ifndef MAIN_H
#define MAIN_H
#define BUFF_SIZE 1024
/**
 * struct fun_struc - struct of function
 * @chx: the chars
 * @func: the functions
 */
typedef struct fun_struc
{
char *chx;
int (*func)();
} list_fun;
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
int _puts_s(va_list list);
int _puts(char *s);
int _print_d(va_list list, int cha);
int _print_i(va_list list, int cha);
int _print_c(va_list list);
int _print_per(void);
int _print_bi(va_list list);
int _print_u(va_list list);
int _print_o(va_list list);
int _print_x(va_list list);
int _print_hexi(long int num, int count);
int _print_X(va_list list);
int _print_HEXI(long int num, int count);
int _print_S(va_list list);
int _print_p(va_list list);
int _print_r(va_list list);
int _print_R(va_list list);
int _handler(const char *format,va_list list);
#endif
