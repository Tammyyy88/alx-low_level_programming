#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a copy of the string str.
 * @str: String to be duplicated
 * Return: Pointer to the duplicated string, or NULL if str is NULL or
 *         if memory allocation fails
 */
char *_strdup(char *str)
{
char *dup;
int len, i;
if (str == NULL)
return (NULL);
/* Get the length of the input string */
len = 0;
while (str[len] != '\0')
len++;
/* Allocate memory for the duplicated string */
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
/* Copy the input string to the duplicated string */
i = 0;
while (i <= len)
{
dup[i] = str[i];
i++;
}
return (dup);
}
