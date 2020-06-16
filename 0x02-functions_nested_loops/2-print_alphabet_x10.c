#include "holberton.h"
/**
 * main -check the code for Hoblerton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
  char x;
  int z;
  z = 0;
  while (z <= 9)
    {
      for (x = 'a'; x <= 'z'; x++)
	{
	  _putchar(x);
	}
      _putchar('\n');
      z++;
    }

} 
