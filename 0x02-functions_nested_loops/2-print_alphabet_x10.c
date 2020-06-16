#include "holberton.h"
/**
 * print_alphabet_x10  - print alphabet ten times
 * @void: no argument
 *
 * Return: Always 0 (Success)
 *
 *
 */
void print_alphabet_x10(void)
{
char x;
char z;

for (z = 0; z <= 9; z++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
} 
