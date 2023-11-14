#include "main.h"
/**
 * _print_S - print string and print non-printable chx '\x' followed
 * by ASCII value hex in upper case
 * @list: list of all argument
 * Return: num of byte printed
 */
int _print_S(va_list list)
{
	char *s = va_arg(list, char *);
	int x, count = 0;
	long int ch;

	for (x = 0; *(s + x); x++)
	{
	if ((*(s + x) > 0 && *(s + x) < 32) || (*(s + x) >= 127))
	{
	count = count + _putchar('\\');
	count = count + _putchar('x');
	ch = s[x];
	if (ch < 16)
	{
	count = count + _putchar('0');
	}
	count = count + _print_HEXI(ch, 0);
	}
	else
	{
	_putchar(s[x]);
	count++;
	}
	}
	return (count);
}
