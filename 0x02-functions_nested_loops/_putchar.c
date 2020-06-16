#include <unistd.h>
#include <stdio.h>


int _putchar(char x)
{
  return (write(1, &x, 1));
}
