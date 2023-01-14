#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function  creates array of chars, and initializes with char.
*@size: size of array
*@c: parameter to hold char
*
*Return: NULL if size = 0
*/

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i = 0;

a = malloc(sizeof(char) * size);

if (size == 0)
{
return (NULL);
}
else if (a == 0)
{
return (NULL);
}
else
{
while (i < size)
{
a[i] = c;
i++;
}
return (a);
}
return (0);
}
