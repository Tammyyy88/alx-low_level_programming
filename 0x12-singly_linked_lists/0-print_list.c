#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *current;
size_t count = 0;
for (current = h; current != NULL; current = current->next)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", current->len, current->str);
count++;
}
return (count);
}
