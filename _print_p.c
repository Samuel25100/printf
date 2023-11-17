#include "main.h"
/**
 * _print_p - print address
 * @list: all arguments
 * Return: number of bytes printed
 */
int _print_p(va_list list)
{
	int count = 0, x;
	char *s = "(nil)";
	void *p = va_arg(list, void *);
	long int num;

	if (p == NULL)
	{
	for (x = 0; s[x] != '\0'; x++)
	{
	count = count + _putchar(s[x]);
	}
	return (count);
	}
	num = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	count = _print_hexi(num, 0);
	return (count + 2);
}
