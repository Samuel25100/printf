#include "main.h"
/**
 * _print_r - print string in reverse
 * @list: list of all argument
 * Return: number of byte printed
 */
int _print_r(va_list list)
{
	char *s = va_arg(list, char*);
	int x = 0, y;

	if (s == NULL)
		s = "(nil)";
	while (s[x])
		x++;
	for (y = x - 1; y >= 0; y--)
		_putchar(s[y]);
	return (x);
}
