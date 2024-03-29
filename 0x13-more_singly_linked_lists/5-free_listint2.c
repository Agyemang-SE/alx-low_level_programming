#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function free a listint_t
 * of the head
 * @head: pointer to the head of the linked list
*/
void free_listint2(listint_t **head)
{
listint_t *ptr;

if (*head == NULL)
{
return;
}
while (*head)
{
ptr = (*head)->next;
free(*head);
*head = ptr;
}
*head = NULL;
}
