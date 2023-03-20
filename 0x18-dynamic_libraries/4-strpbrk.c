#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function searches a string for any of a set of bytes.
 * @s: string
 * @accept: the string to be accepted
 *
 * Return: pointer to the byte in s that matches on one of the byte
*/
char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
for (x = 0; *(accept + x) != 0; x++)
{
if (*s == *(accept + x))
return (s);
}
s++;
}
return (0);
}
