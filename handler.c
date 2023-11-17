#include "main.h"
/**
 * _handler - handle + space and '\#'
 * @format: format from the arguments
 * @list: list of all arguments
 * Return: void
 */
int _handler(const char *format, va_list list)
{
	int x = 0, count = 0;

	while (format[x])
	{
	if (format[x] == '%')
	{
	switch (format[x + 1])
		{
		case '+':
			{
			if (format[x + 2] == 'd')
			{
			count = count + _print_d(list, 1);
			}
			if (format[x + 2] == 'i')
			{
			count = count + _print_i(list, 1);
			}
			}
			break;
		}
	}
	x++;
	}
	return (count);
}
