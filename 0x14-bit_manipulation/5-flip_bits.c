#include "main.h"

/**
 * flip_bits - function returns the number of bits you would
 * need to flip to get from one number to another
 * @n: integer parameter
 * @m: integer parameter
 *
 * Return: the number of times flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int xor = n ^ m;
unsigned int count = 0;
for (; xor; xor &= xor - 1)
{
count++;
}
return (count);
}
