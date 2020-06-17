#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - print n - 98
 * @n: integers
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n < 98)
{
printf(", ");
}
}
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n > 98)
{
printf(", ");
}
}
}
printf("\n");
}
