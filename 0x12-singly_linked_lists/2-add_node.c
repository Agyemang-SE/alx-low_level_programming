#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function adds a new node at the beginning
 * of a list_t list
 * @head: pointer to head of linked list
 * @str: pointer to struct duplicate
 *
 * Return: the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));

if (new == NULL)
{
return (NULL);
}

new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;

return (*head);
}
