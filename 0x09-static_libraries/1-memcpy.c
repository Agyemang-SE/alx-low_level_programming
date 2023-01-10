#include <stdio.h>
#include "main.h"

/**
* _memcpy - function copies memory area
* @dest: destination pointer
* @src: source pointer
* @n: parameter
* 
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
*(dest + x) = *(src + x);
}
return (dest);
}
