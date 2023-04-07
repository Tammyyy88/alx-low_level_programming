#include "main.h"
int _strlen_recursion(char *s);
int pal_checker(char *s, int i, int j);
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the input string.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
/**
 * pal_checker - Checks if a string is a palindrome.
 * @s: Pointer to the input string.
 * @i: Left index.
 * @j: Right index.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int pal_checker(char *s, int i, int j)
{
if (i >= j)
return (1);
else if (s[i] != s[j])
return (0);
else
return (pal_checker(s, i + 1, j - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the input string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s) - 1;
return (pal_checker(s, 0, len));
}
