#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes the node at a given
 * position in a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int count = 0;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1);
}
while (current != NULL && count < index)
{
current = current->next;
count++;
}
if (current == NULL)
return (-1);
temp = current;
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(temp);
return (1);
}
