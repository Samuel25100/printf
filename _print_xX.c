#include "main.h"
int _print_hexi(long int num, int count);
int _print_HEXI(long int num, int count);
/**
 * _print_x - print in hexidecimal (base 16)
 * @list: all arguments
 * Return: number of bytes printed
 */
int _print_x(va_list list)
{
	long int num = va_arg(list, unsigned int);
	int count = 0;

	count = _print_hexi(num, count);
	return (count);
}
/**
 * _print_hexi - takes a long integer num and an integer count as parameters.
 *@num: The hexadecimal number to print.
 *@count: The number of characters that have already been printed.
 *Return: The number of characters printed.
 */
int _print_hexi(long int num, int count)
{
	char arr[] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'
	};

	if (num < 0)
	{
	num = num * -1;
	count++;
	}
	if (num / 16)
	{
	count = _print_hexi(num / 16, count);
	}
	_putchar(arr[num % 16]);
	count++;
	return (count);
}
/**
 * _print_X - print unsigned int
 * @list: all arguments
 * Return: number of bytes printed
 */
int _print_X(va_list list)
{
	long int num = va_arg(list, unsigned int);
	int count = 0;

	count = _print_HEXI(num, count);
	return (count);
}
/**
 * _print_HEXI - takes a long integer num and an integer count as parameters.
 *@num: The hexadecimal number to print.
 *@count: The number of characters that have already been printed.
 *Return: The number of characters printed.
 */
int _print_HEXI(long int num, int count)
{
	char arr[] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'A', 'B', 'C', 'D', 'E', 'F'
	};

	if (num < 0)
	{
	num = num * -1;
	count++;
	}
	if (num / 16)
	{
	count = _print_HEXI(num / 16, count);
	}
	_putchar(arr[num % 16]);
	count++;
	return (count);
}
