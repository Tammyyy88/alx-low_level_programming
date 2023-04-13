#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b); /* Allocate memory using malloc */
if (ptr == NULL)
{
exit(98); /* Terminate the process with status value 98 if malloc fails */
}
return (ptr); /* Return the allocated memory */
}
