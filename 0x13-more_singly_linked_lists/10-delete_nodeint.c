#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function deletes the node at index
 * of a listint_t linked list
 * @head: pointer to pointer to the head of the linked lists
 * @index: index of the node to be deleted
 *
 * Return: 1 if success, -1 if failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i;

if (*head == NULL)
return (-1);

temp = *head;
prev = NULL;
for (i = 0; temp != NULL && i < index; i++)
{
prev = temp;
temp = temp->next;
}

if (temp == NULL)
return (-1);

if (prev == NULL)
*head = temp->next;
else
prev->next = temp->next;

free(temp);

return (1);
}
