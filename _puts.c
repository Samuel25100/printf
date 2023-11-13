#include "main.h"
/**
 * _puts_s - print string of char
 * @list: list of all argument
 * Return: number byte it printed
 */
int _puts_s(va_list list)
{
	char *s = va_arg(list, char *);
	int len = strlen(s);

	return (write(1, s, len));
}
/**
 * _puts - print string
 * @s: the pointer to string
 * Return: number byte it printed
 */
int _puts(char *s)
{
	int len = strlen(s);

	return (write(1, s, len));
}
