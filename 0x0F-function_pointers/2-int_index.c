#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which cmp doesn't return 0, or -1 if no
 *         elements match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
