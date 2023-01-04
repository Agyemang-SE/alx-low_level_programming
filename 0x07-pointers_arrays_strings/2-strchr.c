#include <stdio.h>
#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: pointer string
 * @c: to be located character
 *
 * Return: pointer to the first occurrence if character c
*/

char *_strchr(char *s, char c)
{
while (*s  != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
