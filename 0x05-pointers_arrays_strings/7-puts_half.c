#include "holberton.h"
/**
 *puts_half - print only half of a string.
 *@str: is a ponter.
 *
 */
void puts_half(char *str)
{
	int c = 0;
	int a;

	while (str[c] != 0)
	{
		c++;
	}
	if (c % 2 == 0)
	{
		a = c / 2;
	}
	else
	{
	a = ((c - 1) / 2);
	}
	while (str[a] != 0)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
