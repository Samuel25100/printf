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
	int x = 0;

	x = x + change_to_bi(num);
	return (x);
}
/**
 * change_to_bi - change int to binary
 * @x: the num
 * Return: number of byte it print
 */
int change_to_bi(unsigned int x)
{
	unsigned int z = x;
	int count = 0;

	if (x == 0)
	{
	_putchar('0');
	return(1);
	}
	while (z > 0)
	{
	z = z / 2;
	count++;
	}
	if (x > 0)
	{
	change_to_bi(x / 2);
	_putchar((x % 2) + '0');
	}
	return (count);
}
