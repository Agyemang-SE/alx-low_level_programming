#include "main.h"

/**
 * set_bit - function that sets the value of
 * a bit to 1 at a given index
 * @n: pointer to integer
 * @index: position parameter 
 * Return: 1 on success, 0 otherwise
*/

int set_bit(unsigned long int *n, unsigned int index)
{
return (*n |= (1 << index));
}
