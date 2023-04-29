#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a linked list of integers
 * @head: pointer to head of linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *curr = head, *temp = NULL;
while (curr != NULL)
{
count++;
printf("[%p] %d\n", (void *)curr, curr->n);
temp = curr;
curr = curr->next;
if (temp <= curr)
{
printf("-> [%p] %d\n", (void *)curr, curr->n);
exit(98);
}
}
return (count);
}
