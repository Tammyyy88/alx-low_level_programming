#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - Checks if a string contains only digits
 * @str: The string to check
 * Return: 1 if string contains only digits, 0 otherwise
 */
int is_digit(char *str)
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
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 * Return: 0 if successful, 1 if error occurred
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (is_digit(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
