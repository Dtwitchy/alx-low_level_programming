#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a linked list
* @head: pointer to the first node in the list
* @n: data to insert in that new node
*
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
/*Declear a node*/
listint_t *new_node;

/*Allocte memory for the node*/
new_node = malloc(sizeof(listint_t));

/*transversing the linked list and printing each member*/
if (new_node == NULL)
return (NULL);

/*Assign value to the node*/
new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
