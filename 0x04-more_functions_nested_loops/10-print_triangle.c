#include "holberton.h"
/**
 *print_triangle - print triangle with spaces and #.
 *@size: integer
 *Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
		c = size - (a + 1);
			if (b < c)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
