#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint list
 * @head: pointer parameter of the head of the
 * listint_t list
*/
void free_listint(listint_t *head)
{
listint_t *ptr;

while (head)
{
ptr = head->next;
free(head);
head = ptr;
}
}
