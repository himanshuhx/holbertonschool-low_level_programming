#include "holberton.h"
/**
 *print_most_numbers - print number 0 - 9 without 2, 4;
 *@void: without parameters
 *Return: Always 0.
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2') && !(c == '4'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
