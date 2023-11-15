#include "main.h"
/**
 * _puts_s - print string of char
 * @list: list of all argument
 * Return: number byte it printed
 */
int _puts_s(va_list list)
{
	char *s = va_arg(list, char *);
	int len, x;

	if (s == NULL)
		s = "(null)";
	len = _strlen(s);
	for (x = 0; s[x] != '\0'; x++)
	{
	_putchar(*(s + x));
	}
	return (len);
}
/**
 * _puts - print string
 * @s: the pointer to string
 * Return: number byte it printed
 */
int _puts(char *s)
{
	int len = _strlen(s), x;

	for (x = 0; s[x] != '\0'; x++)
	{
	_putchar(*(s + x));
	}
	return (len);
}
/**
 * _strlen - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))
	{
	len++;
	}
	return (len);
}
