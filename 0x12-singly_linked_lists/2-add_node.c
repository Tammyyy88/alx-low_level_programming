#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Add a new node at the beginning of a list_t list
 * @head: A pointer to a pointer to the first node of the list
 * @str: The string to be added as the next node
 * Return: The address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
while (new_node->str[len] != '\0')
len++;
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
