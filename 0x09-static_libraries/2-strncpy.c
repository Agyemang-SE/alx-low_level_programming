#include "main.h"

/**
 * _strncpy - function copies but avoids undefined behaviour
 * @dest: return paramter, copied
 * @src: parameter to copied from
 * @n: limit for strings to be copied
 *
 * Return: dest on sucess
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != 0; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = 0;
i++;
}
return (dest);
}
