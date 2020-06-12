#include <stdio.h>
/**
 * main - conten about the main suilcar
 *
 *
 *Return : 0 (Success)
 */
int main(void)
{
  int x;
  int y;
  int z; 
  int w;
  for (x = '0'; x <= '9'; x++)
    {
      for (y = '0'; y < '9'; y++)
	{
	  for (z = x; z <= '9'; z++)
	    { 
	      for (w = y + 1; w <= '9'; w++)
		{
	  putchar(x);
	  putchar(y);
	  putchar(' ');
	  putchar(z);
	  putchar(w);
	  if ( x != '9' || y != '8' || z != '9' || w != '9')
	    {
	  putchar(',');
	  putchar(' ');
	    }
		}
	    }
	}
      
    }
  putchar('\n');
  return(0);
}
