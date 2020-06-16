#include "holberton.h"
/**
 *jack_bauer - print day hours and minutes
 *@void: without value
 *Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int x;
int y;
for (x = 0; x < 24; x++)
{
for (y = 0; y < 60; y++)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
_putchar(':');
_putchar(y / 10 + '0');
_putchar(y % 10 + '0');
_putchar('\n');
}
}
}
