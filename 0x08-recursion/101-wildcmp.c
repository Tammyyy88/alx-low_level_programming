#include "main.h"
int str_checker(char *s1, char *s2, int i, int j);
/**
 * str_checker - Checks if two strings are identical.
 * @s1: Pointer to the first input string.
 * @s2: Pointer to the second input string.
 * @i: Left index for s1.
 * @j: Special index (joker) for s2.
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int i, int j)
{
if (s1[i] == '\0' && s2[j] == '\0')
return (1);
else if (s1[i] == s2[j])
return (str_checker(s1, s2, i + 1, j + 1));
else if (s1[i] == '\0' && s2[j] == '*')
return (str_checker(s1, s2, i, j + 1));
else if (s2[j] == '*')
return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
else
return (0);
}
/**
 * wildcmp - Checks if two strings could be considered identical.
 * @s1: Pointer to the first input string.
 * @s2: Pointer to the second input string.
 * Return: 1 if the strings could be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
return (str_checker(s1, s2, 0, 0));
}
