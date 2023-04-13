#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * error_exit - Print error message and exit with status 98
 */
void error_exit(void)
{
printf("Error\n");
exit(98);
}
/**
 * check_digit - Check if a string contains only digits
 * @str: String to check
 * Return: 1 if string contains only digits, 0 otherwise
 */
int check_digit(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * multiply - Multiply two positive numbers
 * @num1: First number as string
 * @num2: Second number as string
 */
void multiply(char *num1, char *num2)
{
int len1, len2, i, j, carry, result;
int *res;
len1 = strlen(num1);
len2 = strlen(num2);
res = calloc(len1 + len2, sizeof(int));
if (res == NULL)
error_exit();
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
result = (num1[i] - '0') * (num2[j] - '0') + res[i + j + 1] + carry;
carry = result / 10;
res[i + j + 1] = result % 10;
}
res[i + j + 1] += carry;
}
if (res[0] == 0)
i = 1;
else
i = 0;
for (; i < len1 + len2; i++)
printf("%d", res[i]);
printf("\n");
free(res);
}
/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !check_digit(argv[1]) || !check_digit(argv[2]))
error_exit();
multiply(argv[1], argv[2]);
return (0);
}
