#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase followed by new line
 * Return: void (Success)
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
