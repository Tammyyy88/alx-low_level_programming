#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
unsigned long int count = 0;
mask <<= (sizeof(unsigned long int) * 8 - 1);
while (mask)
{
if ((mask & n) == mask)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
mask >>= 1;
}
if (count == 0)
_putchar('0');
}
