#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: linked list to search for
*
* Return: address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *shorty = head;
listint_t *tall = head;

while (head && shorty && shorty->next)
{
head = head->next;
shorty = shorty->next->next;

if (head == shorty)
{
head = tall;
tall =  shorty;
while (1)
{
shorty = tall;
while (shorty->next != head && shorty->next != tall)
{
shorty = shorty->next;
}
if (shorty->next == head)
break;

head = head->next;
}
return (shorty->next);
}
}

return (NULL);
}
