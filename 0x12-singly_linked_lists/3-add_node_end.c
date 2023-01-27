#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function adds a new node to the end of
 * a linked list_t list
 * @head: pointer to the head of the linked list
 * @str: string parameter
 *
 * Return: the address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *end;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;

end = *head;
if (*head == NULL)
{
*head = new;
}
else
{
while (end->next != NULL)
{
end = end->next;
}
end->next = new;
}
return (new);
}
