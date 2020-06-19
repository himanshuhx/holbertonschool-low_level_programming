#include <stdio.h>
/**
 *main - contain the prime of number.
 *@void: without arguments
 *Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b;

	a = 2;
	b = 612852475143;
	while (a < b)
	{
		if (b % a != 0)
		{
			a++;
		}
		else
		{
			b = b / a;
		}
	}
	printf("%ld\n", a);
	return (0);
}
