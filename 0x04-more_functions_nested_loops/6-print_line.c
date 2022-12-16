#include "main.h"
/**
 * print_line - function draws a straight line
 * @n: parameter
*/

void print_line(int n)
{
int len;
if (n > 0)
{
for (len = 0; len < n; len++)
{
_putchar(95);
}
}
_putchar(10);
}
