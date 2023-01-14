#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to newly
 * allocated space in memory which copies a strings
 * @str: string parameter
 *
 * Return: pointer to aloocated memory
*/

char *_strdup(char *str)
{
char *a;
void *x = NULL;
int i = 0, n = 0;

if (str != NULL)
{
while (str[i] != '\0')
{
i++;
}
}
else
{
return (x);
}
a  = malloc(sizeof(char) * (i + 1));
if (a != NULL)
{
while (n <= i)
{
a[n] = str[n];
n++;
}
return (a);
}
else
{
return (0);
}
return (0);
}
