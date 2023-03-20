#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints last digit of number stored in the variable n
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
printf("Last digit of %d is ", n);
if (lastd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
}
else if (lastd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("Last digit of %d is %d is and less than 6 and not 0\n", n, lastd);
}
return (0);
}
