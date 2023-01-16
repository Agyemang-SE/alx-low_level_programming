#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function allocates memory
 * @b: parameter
 *
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(sizeof(char) * b);

if (p == NULL)
{
exit(98);
}
return (p);
}
