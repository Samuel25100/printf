#include "main.h"
/**
 * _print_c - print char from %c argument
 * @list: the list of all argument
 * Return: num of byte printed by function
 */
int _print_c(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * _print_per - print '%'
 * Return: 1 success
 */
int _print_per(void)
{
	_putchar(37);
	return (1);
}
