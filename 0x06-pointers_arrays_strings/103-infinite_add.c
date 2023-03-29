#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result or 0
 * if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, len1 = 0, len2 = 0, carry = 0, sum = 0;
while (n1[len1])
len1++;
while (n2[len2])
len2++;
if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);
for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0
|| carry; i--, j--, k++)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
sum %= 10;
r[k] = sum + '0';
}
for (i = 0, j = k - 1; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}
r[k] = '\0';
return (r);
}
