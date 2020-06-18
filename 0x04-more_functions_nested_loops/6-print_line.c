#include "holberton.h"
/**
 *print_line - print _ n times if is positive
 *@n: integer
 *Return: 0 Always.
 */
void print_line(int n)
{
	int b;

	if (n >= 0)
	{
		b = 1;
		while (b <= n)
		{
			_putchar('_');
			b++;
		}
		_putchar('\n');
	}
		else
		{
			_putchar('\n');
		}
}
