#include "holberton.h"
/**
 *print_last_digit - print the last digit of a number
 *@c: integer
 *Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
c = c % 10;
if (c < 0)
{
c = c * -1;
}
_putchar(c + '0');
return (c);
}
