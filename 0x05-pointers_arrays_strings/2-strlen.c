#include "holberton.h"
/**
 * _strlen - return the length of a string
 *@s: pointer.
 *Return: nothing.
 */
int _strlen(char *s)
{
	int n;
	while (*s != 0)
	{
		s++;
		n++;
	}
	return (n);
}
