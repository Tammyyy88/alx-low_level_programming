#include "main.h"
/**
 * print_times_table - Prints the times table of the input, starting with 0.
 * @n : value of the times table to be printed.
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
int row, col, product;
if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
_putchar('0');
for (product = 1; product <= n; product++)
{
_putchar(',');
_putchar(' ');
product = row * col;
if (product <= 99)
_putchar(' ');
if (product <= 9)
_putchar(' ');
if (product >= 100)
{
_putchar((product / 100) + '0');
_putchar(((product / 10)) % 10 + '0');
}
else if (product <= 99 && product >= 10)
{
_putchar((product / 10) + '0');
}
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
}
