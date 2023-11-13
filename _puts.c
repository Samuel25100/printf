#include "main.h"
/**
 * _puts - print string of char
 * @s: pointer to the string
 * Return: number byte it printed
 */
int _puts(char *s)
{
	int len = _strlen(s);

	return write(1, s, len);
}
