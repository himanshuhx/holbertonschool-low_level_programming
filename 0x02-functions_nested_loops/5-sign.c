#include "holberton.h"
/**
 *print_sign - print - 0 or + sign a numb
 *@n: integer
 *
 *Return: Always 0 (Successs)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
