#include "main.h"
/**
 * puts_half - prints the second half of a string
 * followed by a new line.
 * @str: the string to print.
 */
void puts_half(char *str)
{
int length = 0, i;
while (str[length] != '\0')
length++;
if (length % 2 == 0)
i = length / 2;
else
i = (length + 1) / 2;
for (; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
