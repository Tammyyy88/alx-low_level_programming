#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be scanned.
 * @accept: the string containing the characters to match.
 * Return: the number of bytes in the initial segment of @s that consist only
 * of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *p;
for (; *s && *s != ' '; s++)
{
for (p = accept; *p; p++)
{
if (*p == *s)
{
count++;
break;
}
}
}
return (count);
}
