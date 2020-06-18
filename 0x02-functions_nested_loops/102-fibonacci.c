#include <stdio.h>
/**
 * main - print 50 fibonacci numbers.
 * Return: Always 0.
 */
int main(void)
{
long int a, b, c;
int d;
a = 0;
b = 1;
for (d = 0; d < 50; d++)
{
c = a + b;
a = b;
b = c;
printf("%ld", c);
if (d == 49)
{
printf("\n");
}
else
{
printf(", ");
}
}
return (0);
}
