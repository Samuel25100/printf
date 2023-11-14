#include "main.h"
int change_to_bi(unsigned int x);
/**
 * _print_bi - print int in binary
 * @list: all arguments
 * Return: number of byte it print
 */
int _print_bi(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int x;

	x = change_to_bi(num);
	return (x);
}
/**
 * change_to_bi - change int to binary
 * @x: the num
 * Return: number of byte it print
 */
int change_to_bi(unsigned int x)
{
	int count = 0;

	if (n > 0)
	{
	change_to_bi(n / 2);
	count = count + _putchar((n % 2) + '0');
	}
	return (count);
}
