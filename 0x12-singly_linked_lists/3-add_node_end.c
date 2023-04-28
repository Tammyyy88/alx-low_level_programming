#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
size_t len;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
len = strlen(str); 
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;
}
return (new_node);
}
