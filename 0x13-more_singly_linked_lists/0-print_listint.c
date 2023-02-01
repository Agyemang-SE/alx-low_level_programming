#include "lists.h"

/**
 * print_listint - function prints all the elements of listint_t
 * list
 * @h: pointer parameter to listint_t list
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t i;

if (h == NULL)
{
return (0);
}

for (i = 0; h != NULL; i++)
{
printf("%i\n", h->n);
h = h->next;
}
return (i);
}
