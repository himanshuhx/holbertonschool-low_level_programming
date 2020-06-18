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
t = 0;

for (d = 0; d < 50 ; d++)
{
c = a + b;
a = b;
b = c;
if (c % 2 == 0 && c < 4000000)
{
t = t + c;
}
}
printf("%ld\n", t);
return (0);
}
