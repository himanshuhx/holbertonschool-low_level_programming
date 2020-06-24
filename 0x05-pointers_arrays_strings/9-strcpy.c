#include "holberton.h"
/**
 *_strcpy - is a function that copies the string to src by dest
 *@dest: ponter in another
 *@src: ponter in another
 *Return: dest value.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != 0)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
