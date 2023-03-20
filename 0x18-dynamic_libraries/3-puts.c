#include "main.h"

/**
 * _puts - function
 *
 * @str: parameter
 *
 * Return: prints strings
*/

void _puts(char *str)
{
int n = 0;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar(10);
}
