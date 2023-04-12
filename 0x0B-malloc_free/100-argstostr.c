#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Number of arguments
 * @av: Array of argument strings
 * Return: Pointer to a new string containing concatenated arguments with
 *         newline characters, or NULL if ac == 0 or av == NULL or on failure
 */
char *argstostr(int ac, char **av)
{
int i, j;
int len = 0;
char *str, *p;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate total length of arguments and number of newline characters */
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
len++;
j++;
}
len++; /* Account for the newline character */
}
/* Allocate memory for the concatenated string */
str = (char *)malloc(len + 1); /* Add 1 for the null terminator */
if (str == NULL)
return (NULL);
p = str; /* Set a pointer to the beginning of the allocated memory */
/* Copy arguments to the concatenated string with newline characters */
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
*p++ = av[i][j++];
}
*p++ = '\n';
i++;
}
*p = '\0'; /* Add null terminator at the end */
return (str);
}
