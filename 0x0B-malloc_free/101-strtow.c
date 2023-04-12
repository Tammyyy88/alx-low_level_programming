#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 * Return: Number of words in the string
 */
int count_words(char *str)
{
int count = 0;
bool word_started = false;
while (*str)
{
if (*str != ' ' && !word_started)
{
word_started = true;
count++;
}
else if (*str == ' ')
word_started = false;
str++;
}
return (count);
}
/**
 * strtow - Splits a string into words
 * @str: The input string
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
int i, j, k, count;
char **words;
if (str == NULL || str[0] == '\0')
return (NULL);
i = 0, j = 0, k = 0;
count = count_words(str);
/* Allocate memory for the array of words */
words = (char **)malloc((count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
while (str[i])
{
while (str[i] == ' ')
i++;
j = i;
while (str[j] && str[j] != ' ')
j++;
/* Allocate memory for the word */
words[k] = (char *)malloc((j - i + 1) * sizeof(char));
if (words[k] == NULL)
{
/* Free previously allocated memory on failure */
for (k = 0; k < count; k++)
free(words[k]);
free(words);
return (NULL);
}
/* Copy the word to the array */
k = 0;
while (i < j)
{
words[count][k] = str[i];
i++;
k++;
}
words[count][k] = '\0'; /* Null-terminate the word */
k++; /* Move to the next word in the array */
}
words[count] = NULL; /* Null-terminate the array of words */
return (words);
}
