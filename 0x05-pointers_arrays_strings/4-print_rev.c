#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
int i = 0;
int y;
while (*s != '\0')
{
i++;
s++;
}
s--;
for (y = i; y > 0; y--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
