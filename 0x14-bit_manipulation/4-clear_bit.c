#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to
 * 0 at a given index
 * @n: pointer to n integer
 * @index: position parameter
 * Return: 1 on success, 0 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask = 1 << index;
return (*n &= ~mask);
}
