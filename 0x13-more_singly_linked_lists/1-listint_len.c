#include "lists.h"

/**
 * listint_len - function returns the number of elements
 * in a nked list
 * @h: pointer parameter to the listint_t list
 *
 * Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t i;
if (h == NULL)
{
return (0);
}
for (i = 0; h != NULL; i++)
{
h = h->next;
}
return (i);
}
