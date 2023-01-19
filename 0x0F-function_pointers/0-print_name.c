#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: paramter for name
 * @f: parameter function
*/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
if (name != NULL)
{
(*f)(name);
}
}
}
