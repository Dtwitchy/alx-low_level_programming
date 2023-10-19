#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a linked list
* @head: double pointer to the list_t list
* @str: string to put in the new node
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *recent;
list_t *tmp = *head;
unsigned int len = 0;

while (str[len])
len++;

recent = malloc(sizeof(list_t));
if (!recent)
return (NULL);

recent->str = strdup(str);
recent->len = len;
recent->next = NULL;

if (*head == NULL)
{
*head = recent;
return (recent);
}

while (tmp->next)
tmp = tmp->next;
tmp->next = recent;

return (recent);
}
