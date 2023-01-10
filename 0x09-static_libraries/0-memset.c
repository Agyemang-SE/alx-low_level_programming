#include <stdio.h>
#include "main.h"

/**
 * _memset - function
 * @s: pointer
 * @b: value
 * @n: parameter
 *
 * Return: pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int f;

for (f = 0; f < n; f++)
{
*(s + f) = b;
}
return (s);
}
