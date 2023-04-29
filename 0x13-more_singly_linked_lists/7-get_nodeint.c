#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * @index: index of the node to return
 * Return: pointer to the nth node of the listint_t list, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i = 0;
while (current && i < index)
{
current = current->next;
i++;
}
return (i == index ? current : NULL);
}
