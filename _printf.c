#include "main.h"
/**
 * _printf - print the produces output according to a format
 * @format: is a character string
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0, x = 0;
	char *str;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[x])
	{
	if (format[x] == '%')
	{
		switch (format[x + 1])
		{
		case 'c':
			count = count + _putchar(va_arg(list, int));
			break;
		case 's':
			{
			str = va_arg(list, char*);
			count = count + _puts(str);
			}
			break;
		case 'd':
			count = count + _print_int(va_arg(list, int));
			break;
		case 'i':
			count = count + _print_int(va_arg(list, int));
			break;
		case '%':
			count = count + _putchar('%');
			break;
		default:
			count = count + _putchar(format[x]);
		}
		x = x + 1;
	}
	else
	count = count + _putchar(format[x]);
	x++;
	}
	return (count);
}
