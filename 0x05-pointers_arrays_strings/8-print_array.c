#include "holberton.h"
#include <stdio.h>
/**
 *print_array - print array with n elements
 *@a: is a pointer
 *@n: is an integer
 *Return: 0
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%i", a[b]);
		if (b < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
