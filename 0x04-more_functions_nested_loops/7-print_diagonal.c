#include "holberton.h"
/**
 *print_diagonal - print blanck spaces and one \ n times
 *@n: integer
 *Return: 0 Always.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = n - a; b < n; b++)
			{
				if (a > 0)
				{
					_putchar(' ');
				}
				else
				{
					break;
				}
			}
				_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
