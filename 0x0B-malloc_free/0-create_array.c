#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of characters
 * @size: Size of the array
 * @c: Character to initialize the array with
 * Return: Pointer to the created array, or NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
char *array = NULL;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
i = 0;
while (i < size)
{
array[i] = c;
i++;
}
return (array);
}
