#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: destination string to append to
 * @src: source string to append
 * @n: maximum number of bytes to append from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
i++;
j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
