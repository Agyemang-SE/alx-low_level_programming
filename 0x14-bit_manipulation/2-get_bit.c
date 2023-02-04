#include "main.h"

/**
 * get_bit - function that returns the value
 *  of a bit at a given index
 * @n: integer parameter
 * @index: position 
 *
 * Return: index'th bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
return ((n & (1UL << index)) != 0);
}
