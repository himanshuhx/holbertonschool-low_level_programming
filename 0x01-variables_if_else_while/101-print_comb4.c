#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int x;
  int y;
  int z;
  for (x = '0'; x <= '9'; x++)
    {
      y = x + 1;
      for (; y <= '9'; y++)
	{
	  for(z = y +1; z <= '9'; z++)
	    {
	  putchar(x);
	  putchar(y);
	  putchar(z);
	  if (x == '7' && y == '8' && z == '9')
	    {
	      break;
	    }
	  putchar(',');
	  putchar(' ');
	    }	
	}
    }
  putchar('\n');
  return(0);
}
