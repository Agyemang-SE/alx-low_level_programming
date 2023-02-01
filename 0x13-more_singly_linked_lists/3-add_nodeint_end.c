#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function adds the new node
 * at the end of listint_t list
 * @head: pointer paramater to the head of listint_t
 * list
 * @n: integer parameter
 *
 * Return: the address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *new;
ptr = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}


new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
}


return (new);
}
