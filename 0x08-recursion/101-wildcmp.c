#include "main.h"
/**
 * wildcmp - Compares two strings with wildcard support
 * @s1: The first input string
 * @s2: The second input string with wildcards
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* If both strings are empty, they are identical */
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == '\0' && *s2 == '*')
return (wildcmp(s1, s2 + 1));
if (*s2 == '\0')
return (0);
if (*s2 == '*')
{
/* Skip consecutive '*' in s2 */
while (*(s2 + 1) == '*')
s2++;
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
if (*s1 == *s2 || *s2 == '?')
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
