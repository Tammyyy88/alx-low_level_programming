#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node
 * at index of a listint_t linked list
 * @head: pointer to pointer to the head node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i;
if (*head == NULL)
return (-1);
temp = *head;
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
for (i = 0; i < index; i++)
{
if (temp == NULL)
return (-1);
prev = temp;
temp = temp->next;
}
prev->next = temp->next;
free(temp);
return (1);
}
