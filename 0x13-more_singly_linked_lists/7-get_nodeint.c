#include "lists.h"

/**
 * get_nodeint_at_index-function that returns the nth
 * node of a listint_t linked list
 * @head:  the head parameter of the linked list
 * @index: integer parameter
 *
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *ptr = head;
unsigned int i;

for (i = 0; i < index; i++)
{
if (ptr == NULL)
{
return (NULL);
}
ptr = ptr->next;
}
return (ptr);

}
