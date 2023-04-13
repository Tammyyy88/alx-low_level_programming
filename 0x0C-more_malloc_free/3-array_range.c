#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: Minimum value of the range (inclusive)
 * @max: Maximum value of the range (inclusive)
 * Return: Pointer to the newly created array, or NULL if unsuccessful
 */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);
arr = malloc(sizeof(*arr) * ((max - min) + 1));
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
arr[i] = min;
return (arr);
}
