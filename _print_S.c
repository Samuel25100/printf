#include "main.h"
int _print_SHEX(long int c);
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
	x = x + 2;
	if (ch < 16)
	{
	count = count + _putchar('0');
	x = x + 1;
	}
	count = count + _print_HEXI(ch, 0);
	x = x + 1;
	}
	else
	{
	_putchar(s[x]);
	count++;
	}
	}
	return (count);
}
/*int _print_SHEX(long int c)
{
	char arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char *a;
	int x = 0, count = 0;
	
	while (c / 16)
		count++;
	a = malloc(sizeof(char) * count);
	count = 0;
	while (c / 16 != 0)
	{
	a[x] = arr[c % 16];
	c = c / 16;
	x++;
	}
	while (x >= 0)
	{
	count = count + _putchar(a[x]);
	x--;
	}
	return (count);
}*/
