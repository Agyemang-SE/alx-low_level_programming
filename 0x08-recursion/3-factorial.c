#include "main.h"

/**
 * factorial - function returns factorial of a given number
 *@n: parameter
 *
 * Return: integer
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
n = n *factorial(n - 1);
return (n);
}
}
