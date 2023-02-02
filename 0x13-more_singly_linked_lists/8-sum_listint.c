#include "lists.h"

/**
 * sum_listint - function returns the sum of all
 * the data(n) of a lintint_t
 * @head: the head of the linkedlist
 *
 * Return: the sum value
*/

int sum_listint(listint_t *head)
{
listint_t *ptr = head;
int sum = 0;
if (ptr == NULL)
{
return (0);
}
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
