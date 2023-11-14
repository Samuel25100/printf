#include "main.h"
int print_unsigned(long int num, int count);
int _print_octal(long int num, int count);
/**
 * _print_u - print unsigned int
 * @list: all arguments
 * Return: number of bytes printed
 */
int _print_u(va_list list)
{
	long int num = va_arg(list, unsigned int);
	int count = 0;
	count = print_unsigned(num , count);
	return (count);
}
int print_unsigned(long int num, int count)
{
	if (num < 0)
	{
	num = num * -1;
	count++;
	}
	if (num / 10)
	{
	count = print_unsigned(num / 10, count++);
	}
	_putchar((num % 10) + '0');
	count++;
	return (count);
}
/**
 * _print_o - print int in octal (base 8)
 * @list: all arguments
 * Return: number of bytes printed
 */
int _print_o(va_list list)
{
	int count = 0;
	long int num = va_arg(list, unsigned int);

	count = _print_octal(num, count);
	return (count);
}
int _print_octal(long int num, int count)
{
	if (num < 0)
        {
	num = num * -1;
	count++;
	}
	if (num / 8)
	{
	count = _print_octal( num / 8, count);
	count++;
	}
	_putchar((num % 8) + '0');
	count++;
	return (count);
}
