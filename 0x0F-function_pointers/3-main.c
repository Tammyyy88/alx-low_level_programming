#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 98 if the number of arguments is wrong,
 *         99 if the operator is none of the above, or 100 if the user tries
 *         to divide (/ or %) by 0.
 */
int main(int argc, char *argv[])
{
int a, b, result;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (op_func == NULL)
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
result = op_func(a, b);
printf("%d\n", result);
return (0);
}
