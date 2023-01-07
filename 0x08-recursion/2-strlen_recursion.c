#include "main.h"

/**
 * _strlen_recursion - function
 * @s: pointer of a string
 *
 * Return: integer
*/

int _strlen_recursion(char *s)
{
int n = 1;
if (*s != '\0')
{
s++;
n = n + _strlen_recursion(s);
return (n);
}
return (0);
}
