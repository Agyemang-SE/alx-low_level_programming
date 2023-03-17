#include "lists.h"

/**
 * print_dlistint - function the prints all the elements
 * @h: pointer parameter to d-linked
 * 
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t i;

if (h == NULL)
{
return (0);
}
for (i = 0; h!= NULL; i++)
{
printf("%i\n", h->n);
h = h->next;
}
return (i);
}
