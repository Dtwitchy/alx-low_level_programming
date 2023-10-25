#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a linked list
* @head: pointer to the first element in the list
* @n: data to insert in the new element
*
* Return:  the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
/*Declare a node*/
listint_t *new_node;
listint_t *temp = *head;

/*Allocate memory for the node*/
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

/*Assign value to the node*/
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/*transversing the linked list and printing each member*/
while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
