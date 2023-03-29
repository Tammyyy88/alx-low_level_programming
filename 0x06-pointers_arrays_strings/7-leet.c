#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: the string to be encoded.
 * Return: a pointer to the modified string.
 */
char *leet(char *str)
{
int i, j;
char c;
char leet_table[] = {'4', '3', '0', '7', '1'};
char letters[] = {'a', 'e', 'o', 't', 'l'};
i = 0;
while (str[i] != '\0')
{
c = str[i];
j = 0;
while (j < 5)
{
if (c == letters[j] || c == letters[j] - 32)
{
str[i] = leet_table[j];
break;
}
j++;
}
i++;
}
return (str);
}
