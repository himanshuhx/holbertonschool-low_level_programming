#include <stdio.h>
/**
 *main - print natural number mult (3 - 5) <= 1024
 *
 *Return: Always 0
 */
int main(void)
{
int a, b;
for (a = 0; a < 1024; a++)
{
if (a % 3 == 0 || a % 5 == 0)
{
b = b + a;
}
}
printf("%d\n", b);
return (0);
}
