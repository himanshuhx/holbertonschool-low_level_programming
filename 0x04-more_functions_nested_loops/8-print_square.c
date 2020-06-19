#include "holberton.h"
/**
 *print_square - print square with (#)
 *@size: integer
 *Return: Always 0
 */
void print_square(int size)
{
	int b, c;

	if (size > 0)
	{
	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}

}
