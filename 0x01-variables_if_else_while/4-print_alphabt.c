#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
char x;
for (x = 'a'; x<= 'z'; x++)
{
if (x != 'e' && x != 'q')
{
putchar (x);
}
}
printf("\n");
return (0);
}
