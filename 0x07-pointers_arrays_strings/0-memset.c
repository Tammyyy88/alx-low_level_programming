#include "main.h"
/**
 * _memset - sets a block of memory with a specified value
 * @s: a pointer to the block of memory to be filled
 * @b: the value to be set
 * @n: the number of bytes to be set to the value
 * Return: a pointer to the filled block of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *ptr = s;
for (i = 0; i < n; i++)
{
*ptr++ = b;
}
return (s);
}
