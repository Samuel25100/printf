#include "main.h"
/**
 * _print_u - print unsigned int
 * @list: all arguments
 * Return: number of bytes printed
 */
int _print_u(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char array[200] = {0};
	int count = 0, x, z = 12;

	if (num == 0)
	{
	count += _putchar('0');
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
