#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - function  that returns a pointer
*to the content of 2 strings
* @s1: Parameter with a string
* @s2: Parameter with a string
* Return: Return the new array
*/
char *str_concat(char *s1, char *s2)
{
char *a;
void *x = NULL;
int b = 0, c = 0, d = 0, e = 0, f = 0;

if (s1 != NULL)
while (s1[b] != 0)
b++;
else
s1 = "";
if (s2 != NULL)
while (s2[c] != 0)
c++;
else
s2 = "";

a = malloc(sizeof(char) * (b + c + 1));

if (a == NULL)
{
return (x);
}
else
{
while (d < b)
{
a[f] = s1[d];
d++;
f++;
}
while (e <= c)
{
a[f] = s2[e];
e++;
f++;
}
return (a);
}
return (0);
}
