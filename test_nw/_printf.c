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
		{"%s", _puts_s}, {"%c", _print_c}, 
		{"%%", _print_per}, {"%i", _print_i}, 
		{"%d", _print_d}};
	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[x])
	{
	if (format[x] == '%')
	{
	for (y = 0; y < 5; y++)
	{
	if (format[x + 1] == func[y].chx[1])
	{
	count = count + func[y].func(list);
	x = x + 2;
	}
	}
	}
	count = count + _putchar(format[x]);
	x++;
	}
	return (count);
}
