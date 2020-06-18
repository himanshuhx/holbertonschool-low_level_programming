#include "holberton.h"
/**
 *_isdigit - function that check digit or otherwise
 *@c: integer to check
 *Return: Always 0.
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}
