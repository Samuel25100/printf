#include <stdlib.h>
/**
 * _strlen - return the number of string length
 * @s: the string pointer
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	return (len);
}
