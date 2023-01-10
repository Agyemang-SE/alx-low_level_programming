#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: parameter to be compared
 * @s2: paramter to be compared
 *
 * Return: ess than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == 0)
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
