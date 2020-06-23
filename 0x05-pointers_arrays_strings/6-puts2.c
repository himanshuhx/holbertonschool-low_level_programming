#include "holberton.h"
/**
 *puts2 - print every others characteres of a string starting with the first ch
 *@str: pointer
 *Return: nothing.
 */
void puts2(char *str)
{
	int c = 0;

	while (*str != 0)
	{
		if (c % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		c++;
	}
	_putchar('\n');
}
