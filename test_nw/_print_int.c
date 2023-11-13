#include "main.h"
/**
 * _print_i - print number as char string
 * @list: the number to be print
 * Return: the number of byte it print
 */
int _print_i(va_list list)
{
	int num = va_arg(list, int);
	char array[15] = {0};
	int count = 0, x, z = 12;

	if (num == 0)
	{
	count += _putchar('0');
	}
	else if (num < 0)
	{
	count += _putchar('-');
	num = num * -1;
	}
	for (x = 0; num != 0; x++)
	{
	array[z--] = (num % 10) + '0';
	num = num / 10;
	}
	count = count + _puts(&array[z + 1]);
	return (count);
}
/**
 * _print_d - print num as char string
 * @list: all argument
 * Return: the number of byte it print
 */
int _print_d(va_list list)
{
	int num = va_arg(list, int);
	char array[15] = {0};
	int count = 0, x, z = 12;

	if (num == 0)
	{
	count += _putchar('0');
	}
	else if (num < 0)
	{
	count += _putchar('-');
	num = num * -1;
	}
	for (x = 0; num != 0; x++)
	{
	array[z--] = (num % 10) + '0';
	num = num / 10;
	}
	count = count + _puts(&array[z + 1]);
	return (count);
}
