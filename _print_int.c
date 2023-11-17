#include "main.h"
/**
 * _print_i - print number as char string
 * @list: the number to be print
 * @cha: if it 1 need to add '\+' char else nothing
 * Return: the number of byte it print
 */
int _print_i(va_list list, int cha)
{
	long num = va_arg(list, int);
	char buffer[BUFF_SIZE] = {0};
	int count = 0, x, z = 12;

	if ((cha != 0) && (num >= 0))
	{
	_putchar('+');
	}
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
	buffer[z--] = (num % 10) + '0';
	num = num / 10;
	}
	count = count + _puts(&buffer[z + 1]);
	return (count);
}
/**
 * _print_d - print num as char string
 * @list: all argument
 * @cha: if it 1 need to add '\+' char else nothing
 * Return: the number of byte it print
 */
int _print_d(va_list list, int cha)
{
	long num = va_arg(list, int);
	char buffer[BUFF_SIZE] = {0};
	int count = 0, x, z = 12;

	if ((cha != 0) && (num >= 0))
	{
	_putchar('+');
	}
	if (num == 0)
	{
	count += _putchar('0');
	}
	else if (num < 0)
	{
	count = count + _putchar('-');
	num = num * -1;
	}
	for (x = 0; num != 0; x++)
	{
	buffer[z--] = (num % 10) + '0';
	num = num / 10;
	}
	count = count + _puts(&buffer[z + 1]);
	return (count);
}
