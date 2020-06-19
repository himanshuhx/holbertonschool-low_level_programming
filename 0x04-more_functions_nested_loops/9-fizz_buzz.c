#include <stdio.h>
/**
 *main - print all number and Fizz Buzz words
 *
 *
 *Return: Always 0.
 */
int main(void)
{
	int n;

	n = 1;
	for (; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}

