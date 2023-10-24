#include "lists.h"

/**
* listint_len - returns the number of elements in a linked lists
* @h: linked list of type listint_t to traverse
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
/*assign value to the node*/
size_t numb = 0;

/*transversing the linkedlist and printing each member*/
while (h != NULL)
{
numb++;
h = h->next;
}

return (numb);
}

