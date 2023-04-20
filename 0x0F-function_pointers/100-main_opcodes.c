#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes of the main function
 * main - Entry point
 * Return: 0 on success, 1 or 2 on failure
 * @ptr: Pointer to the main function
 * @n: Number of bytes to print
 */
void print_opcodes(char *ptr, int n);
int main(int argc, char **argv)
{
int i;
char *ptr;
int n;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
ptr = (char *)&main;
for (i = 0; i < n; i++)
{
printf("%.2hhx", ptr[i]);
if (i != n - 1)
printf(" ");
}
printf("\n");
return (0);
}
