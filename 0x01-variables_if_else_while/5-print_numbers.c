#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all single digit numbers of base followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
printf("%d", i);
i++;
}
putchar('\n');
return (0);
}
