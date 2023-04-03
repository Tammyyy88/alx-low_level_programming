#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to search for.
 * Return: If the character is found - a pointer to the first occurrence.
 *         If the character is not found - NULL.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
