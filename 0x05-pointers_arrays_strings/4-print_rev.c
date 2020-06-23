#include "holberton.h"
/**
 *print_rev - function that prints a string in reverse.
 *@s: pointer
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int c;

	while (*s != 0)
	{
		c++;
		s++;
	}
	s = s - 1;
	while (c - 1 >= 0)
	{
		_putchar(*s);
		c--;
		s--;
	}
	_putchar('\n');
}
