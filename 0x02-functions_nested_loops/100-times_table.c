#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_times_table - print tables 
 * @n: integers
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
  int a, b, c;
  if ( n >=0 && n <= 13)
    {
  for (a = 0; a <= n; a++)
    {
    for (b = 0; b <= n; b++)
      {
	c = a * b;
	if (c <= 9)
	  {
	    if (b != 0)
	      {
	    _putchar(',');
	    _putchar(' ');
	    _putchar(' ');
	    _putchar(' ');
	      }
	    _putchar(c % 10 + '0');
	  }
	else if (c <= 99)
	  {
	    _putchar(',');
	    _putchar(' ');
	    _putchar(' ');
	    _putchar(c / 10 + '0');
	    _putchar(c % 10 + '0');
	  }
	else if (c >= 100)
	  {
	    _putchar(',');
	    _putchar(' ');
	    _putchar(c / 100 + '0');
	    _putchar((c / 10) % 10 + '0');
	    _putchar(c % 10 + '0');
	  }
      }
    _putchar('\n');
    }

    } 
}
