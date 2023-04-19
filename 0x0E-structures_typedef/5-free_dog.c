#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for dog_t struct.
 * @d: Pointer to dog_t struct to free.
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
