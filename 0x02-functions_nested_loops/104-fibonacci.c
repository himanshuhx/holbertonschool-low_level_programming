#include <stdio.h>
/**
 * main - print 50 fibonacci numbers.
 * Return: Always 0.
 */
int main(void)
{
float a, b, c;
int d;
a = 0;
b = 1;
for (d = 0; d < 99; d++)
{
c = a + b;
a = b;
b = c;
printf("%.0f", c);
if (d == 98)
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
