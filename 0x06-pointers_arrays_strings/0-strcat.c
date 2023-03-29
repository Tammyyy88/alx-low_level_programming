#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p)
{
p++;
}
while (*src)
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}

