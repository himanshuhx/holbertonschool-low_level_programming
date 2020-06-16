#include "holberton.h"

/**
 *_abs - return absolute value
 *@c: integer
 *Return: Always 0 (Success)
 */
int _abs(int c)
{
if (c < 0)
{
return (c * -1);
}
else
{
return (c);
}
}
