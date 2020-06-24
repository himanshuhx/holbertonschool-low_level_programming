#include "holberton.h"
/**
 *puts_half - print only half of a string.
 *@str: is a ponter.
 *
 */
void puts_half(char *str)
{
	int c = 0;
	int a = 0;

	while (str[c] != 0)
	{
		c++;
	}
	a = ((c / 2) + (c % 2));
	while (str[a] != 0)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
