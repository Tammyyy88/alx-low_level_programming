#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
int i = 0;
long j = 1, k = 2;
while (i < 50)
{
if (i == 0)
{
printf("%ld", (long)j);
}
else if (i == 1)
{
printf("%ld", (long)k);
}
else
{
k += j;
j = k - j;
printf("%ld", (long)k);
}
++i;
}
printf("%ld", (long));
return (0);
}
