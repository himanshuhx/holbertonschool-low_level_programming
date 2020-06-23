#include "holberton.h"
/**
 *rev_string - function that reverses a string.
 *@s: pointer;
 *Return: Always 0.
 */
void rev_string(char *s)
{
	int c = 0;
	int d = 0;
	char v;

	while (s[c] != 0)
	{
		c++;
	}
	for (c = c - 1; c >= d; c--)
	{
	v = s[d];
	s[d] = s[c];
	s[c] = v;
	d++;
	}

}
