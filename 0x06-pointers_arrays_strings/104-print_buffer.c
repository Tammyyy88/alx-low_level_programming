#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer, 10 bytes at a time
 * @b: the buffer to print
 * @size: the size of the buffer
 */
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", *(b + i + j));
else
printf("  ");
if (j % 2 == 1)
printf(" ");
}
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = *(b + i + j);
if (c >= ' ' && c <= '~')
printf("%c", c);
else
printf(".");
}
else
{
printf(" ");
}
}
printf("\n");
}
}
