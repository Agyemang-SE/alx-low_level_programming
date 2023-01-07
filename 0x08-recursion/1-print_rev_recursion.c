#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: pointer to a string
 *
 * Return: 0 on success
*/

void _print_rev_recursion(char *s)
{
if (*s != 0)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
