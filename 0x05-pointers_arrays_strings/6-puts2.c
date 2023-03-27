#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: string to print
 */
void puts2(char *str)
{
int i = 0;
int x = 0;
char *y = str;
int a;
while (*y != '\0')
{
y++;
i++;
}
x = i - 1;
for (a = 0 ; a <= x ; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
