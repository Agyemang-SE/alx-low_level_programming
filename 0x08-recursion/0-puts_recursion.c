#include "main.h"

/**
 * _puts_recursion - function
 *@s: pointer of a string
 *
 * Return: String
*/

void _puts_recursion(char *s)
{
if (s[0] == '\0')
{
_putchar(10);
return;
}
_putchar(s[0]);
s++;
_puts_recursion(s);
}
