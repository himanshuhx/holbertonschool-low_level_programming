#include "holberton.h"
/**
 *print_numbers - print numbers 0-9
 *@void: without parameter
 *Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
