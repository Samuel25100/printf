#include "main.h"
/**
 * _print_R - print the rot13'ed string
 * @list: all arguments
 * Return: the number of bytes printed
 */
int _print_R(va_list list)
{
	int x, y, count = 0;
	char *s = va_arg(list, char *);
char arr1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char arr2[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	
	if (s == NULL)
		s = "(ahyy)";
	for (x = 0; s[x] != '\0'; x++)
	{
	if ((s[x] <= 122 && s[x] >= 97)||(s[x] <= 90 && s[x] >= 65))
	{
		for (y = 0; y < 52; y++)
		{
		if (s[x] == arr1[y])
		{
		count = count + _putchar(arr2[y]);
		break;
		}
		}
	}
	else
		count = count + _putchar(s[x]);
	}
	return (count);
}
