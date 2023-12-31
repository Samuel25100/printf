#include "main.h"
/**
 * _printf - print the produces output according to a format
 * @format: is a character string
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0, x = 0, y;
	va_list list;

	list_fun func[] = {
	{"%c", _print_c}, {"%s", _puts_s}, {"%%", _print_per},
	{"%i", _print_i}, {"%d", _print_d}, {"%b", _print_bi},
	{"%u", _print_u}, {"%o", _print_o}, {"%x", _print_x},
	{"%X", _print_X}, {"%S", _print_S}, {"%p", _print_p},
	{"%r", _print_r}, {"%R", _print_R}};

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
loop_start:
	while (format[x] != '\0')
	{
	if (format[x] == '%')
	{
	for (y = 0; y <= 13; y++)
	{
	if (format[x + 1] == func[y].chx[1])
	{
	count = count + func[y].func(list);
	x = x + 2;
	goto loop_start;
	}
	}
	if (format[x + 1] == '+')
	{
	count = count + _handler(format, list);
	x = x + 3;
	}
	}
	_putchar(format[x]);
	count++;
	x++;
	}
	va_end(list);
	return (count);
}
