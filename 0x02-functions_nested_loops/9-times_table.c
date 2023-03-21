#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return: 0
*/
void times_table(void)
{
int num, a, b;
for (num = 0; num <= 9; num++)
{
_putchar('0');
for (a = 1; a <= 9; a++)
{
_putchar(',');
_putchar(' ');
c = num * a;
if (c <= 9)
_putchar(' ');
else
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
