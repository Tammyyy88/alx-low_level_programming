#include <stdio.h>
#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 * Return: Pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *start = haystack;
char *substr = needle;
if (*substr == '\0')
{
return (start);
}
while (*start != '\0')
{
if (*start == *substr)
{
char *temp = start;
while (*temp == *substr || *substr == '\0')
{
if (*substr == '\0')
{
return (start);
}
temp++;
substr++;
}
substr = needle;
}
start++;
}
return (NULL);
}
