#include "lists.h"

/**
* print_listint - prints all the elements of a linked list
* @h: A pointer to the head of the list.
*
* Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
/*assign value to the node*/
size_t numb = 0;

/*transversing the linked list and printing each member*/
while (h != NULL)
{
printf("%d\n", h->n);
numb++;
h = h->next;
}

return (numb);
}

