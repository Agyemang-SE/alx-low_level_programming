#include "main.h"
#include <ctype.h>

/**
 * binary_to_uint - function converts a binary number to
 * an unsigned int
 *
 * @b: pointer to the binary string
 *
 * Return: the number of binary
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
while (*b)
{
if (*b == '1')
{
n = (n << 1) | 1;
}
else if (*b == '0')
{
n <<= 1;
}
else
{
return (0);
}
b++;
}
return (n);
}
