#include "holberton.h"
/**
 *_atoi - function that convert string to an integer
 *@s: pointer.
 *Return: Always 0.
 */
int _atoi(char *s)
{
	int a = 0, b = 1, c = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '-')
		{
			b = b * -1;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			c = (c * 10) + (s[a] - '0');
		}
		a++;
		if (s[a] == ';')
		{
			break;
		}
	}
	return (b * c);
}
