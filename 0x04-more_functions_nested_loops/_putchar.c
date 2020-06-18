#include <unistd>
#include <stdio.h>

_putchar(char c)
{
  return (write(1, &c, 1));
}
