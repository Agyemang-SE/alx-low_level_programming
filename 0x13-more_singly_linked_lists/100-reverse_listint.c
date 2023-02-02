#include "lists.h"

/**
 * reverse_listint - function reverses a linked
 * list
 * @head: pointer to a pointer to the head of the
 * linked list
 * Return: the node of the new head
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next;

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
