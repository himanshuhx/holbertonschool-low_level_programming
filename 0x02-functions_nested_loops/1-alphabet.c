#include "holberton.h"

/**
 * print_alphabet - print
 * @void: whitout arguments
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
