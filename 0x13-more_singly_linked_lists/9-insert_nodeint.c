#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function inserts a new node
 *
 * @head: pointer to the head of the linked list
 * @idx: integer index
 * @n: integer parameter
 * Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new, *ptr;
if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->next = *head;
*head = new;
}
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
ptr = *head;
for (i = 0; i < idx - 1 && ptr != NULL; i++)
{
ptr = ptr->next;
}

if (ptr == NULL)
{
free(new);
return (NULL);
}
new->next = ptr->next;
ptr->next = new;
return (new);
}
