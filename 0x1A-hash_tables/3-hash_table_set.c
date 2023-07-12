#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to modify
 * @key: The key to add or update
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current;
if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
return (0);
index = key_index((unsigned char *)key, ht->size);
/* Check if key already exists, update value */
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
return (1);
}
current = current->next;
}
/* Create new node */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
