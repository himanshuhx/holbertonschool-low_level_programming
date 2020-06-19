#include "holberton.h"
/**
 *print_number - print numb assigned for n
 *@n: integer
 *Return: Always 0.
 */
void print_number(int n)
{
	int c;

	if (n < 0)
	{
		c = n * -1;
		_putchar('-');
	}
	else
	{
		c = n;
	}
	if (c >= 0 && c <= 9)
	{
		_putchar(c + '0');
	}
	else if (c >= 10 && c <= 99)
	{
		_putchar (c / 10 + '0');
		_putchar(c % 10 + '0');
	}
	else if (c >= 100 && c <= 999)
	{
	_putchar(c / 100 + '0');
	_putchar((c / 10) % 10 + '0');
	_putchar(c % 10 + '0');
	}
	else if (c >= 1000 && c <= 9999)
	{
		_putchar(c / 1000 + '0');
		_putchar((c / 100) % 10 + '0');
		_putchar((c / 10) % 10 + '0');
		_putchar(c % 10 + '0');
	}
}
