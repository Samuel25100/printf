#include "main.h"
int print_unsigned(long int num, int count);
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
/*int _print_o(va_list list)
{

}*/
/**
 * _print_x - print in hexidecimal (base 16)
 * @list: all arguments
 * Return: number of bytes printed
 */
/*int _print_x(va_list list)
{

}*/
/**
 * _print_X - print unsigned int
 * @list: all arguments
 * Return: number of bytes printed
 */
/*int _print_X(va_list list)
{

}*/
