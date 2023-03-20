#include "main.h"
#include <string.h>

/**
 * _strncat - function concatenates without undefined behaviour
 * @dest: return string appended
 * @src: string to append to dest
 * @n: require string to appened to dest
 *
 * Return: dest for success
*/

char *_strncat(char *dest, char *src, int n)
{
int x = 0;
int y = 0;

while (dest[x])
{
x++;
}
while (y < n && src[y] != 0)
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = 0;
return (dest);
}
