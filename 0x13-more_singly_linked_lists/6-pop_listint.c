#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head node of the list.
 * Return: The data of the deleted head node.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
return (0);
temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);
return (n);
}
