#include <stdio.h>
#include "lists.h"

/**
 * list_len - function returns the number of elements in
 * linked list_t list
 * @h: pointer the head of linked list
 *
 * Return: the number of elements
*/

size_t list_len(const list_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
{
if (h->str == NULL)
{
printf("NULL");
}
h = h->next;
}
return (i);
}
