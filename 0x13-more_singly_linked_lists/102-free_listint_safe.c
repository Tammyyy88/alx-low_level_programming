#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the address of the head node of
 *     the linked list.
 * Return: The number of nodes that were in the list.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t count = 0;
if (h == NULL || *h == NULL)
return (0);
current = *h;
*h = NULL;
while (current != NULL)
{
count++;
next = current->next;
free(current);
if (next >= current)
break;
current = next;
}
return (count);
}
