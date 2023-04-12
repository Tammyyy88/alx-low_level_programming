#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1, len2, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Get the lengths of the input strings */
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
/* Allocate memory for the concatenated string */
concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);
/* Copy the contents of s1 to the concatenated string */
i = 0;
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}
/* Copy the contents of s2 to the concatenated string */
j = 0;
while (s2[j] != '\0')
{
concat[i] = s2[j];
i++;
j++;
}
concat[i] = '\0'; /* Add null terminator to the concatenated string */
return (concat);
}
