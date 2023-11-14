#include "main.h"

int print_unsig(unsigned int num, int count);
int _print_octal(unsigned long int num, int count);

/**
 * _print_u - print unsigned int
 * @list: all arguments
 * Return: number of bytes printed
 */
int _print_u(va_list list)
{
	unsigned long int num = va_arg(list, unsigned long int);
	int count = 0;

	count = print_unsig(num, count);
	return (count);
}

/**
 * print_unsigned - prints an unsigned integer
 * @num: the unsigned integer to be printed
 * @count: current count of characters printed
 * Return: updated count of characters printed
 */
int print_unsig(unsigned int num, int count)
{
	if (num / 10)
	count = print_unsig(num / 10, count);

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
	unsigned long int num = va_arg(list, unsigned long int);

	count = _print_octal(num, count);
	return (count);
}

/**
 * _print_octal - prints an integer in octal representation
 * @num: the number to be printed
 * @count: current count of characters printed
 * Return: updated count of characters printed
 */
int _print_octal(unsigned long int num, int count)
{
	if (num / 8)
	count = _print_octal(num / 8, count);

	_putchar((num % 8) + '0');
	count++;

	return (count);
}
