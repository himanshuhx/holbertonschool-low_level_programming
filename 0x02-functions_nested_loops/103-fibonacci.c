#include <stdio.h>
/**
 * main - print 50 fibonacci numbers.
 * Return: Always 0.
 */
int main(void)
{
long int a, b, c, t;
int d;
a = 0;
b = 1;
for (d = 0; d < 32 ; d++)
{
c = a + b;
a = b;
b = c;
t = t + c;
}
printf("%ld\n", t);
return (0);
}
