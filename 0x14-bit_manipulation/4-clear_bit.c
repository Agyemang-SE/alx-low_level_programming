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
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
