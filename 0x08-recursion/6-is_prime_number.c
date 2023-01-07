#include "main.h"

/**
* is_prime - function
* @x: parameter
* @y: parameter
* Return: returns 1 prime and 0 no prime
*/
int is_prime(int x, int y)
{
if ((x % y) == 0 && y < x)
return (0);
if (x == y)
return (1);
else
return (is_prime(x, y + 1));
}
/**
* is_prime_number - checks if it's prime
* @n: parameter
* Return: 0 for no prime and 1 for prime
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime(n, 2));
}
