#include "holberton.h"

/**
 * times_table - times table in c
 *@void: void
 *Return: alway 0
 */
void times_table(void)
{
  int a, b, c, d, e;

a = 0;
while (a <= 9)
{
b = 0;
while (b <= 9)
{
c = a * b;
d = c / 10;
e = c % 10;
if (b == 0)
_putchar('0');
else
{
if (d == 0)
_putchar(' ');
else
_putchar(d + '0');
_putchar(e + '0');
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
}
}
