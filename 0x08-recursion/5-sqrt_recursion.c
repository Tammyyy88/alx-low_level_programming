#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate square root for
 * Return: The natural square root of n, -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
int start, end, result;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
start = 1;
end = n;
result = 0;
while (start <= end)
{
int mid = (start + end) / 2;
if (mid * mid == n)
return (mid);
else if (mid * mid < n)
{
start = mid + 1;
result = mid;
}
else
{
end = mid - 1;
}
}
return (result);
}
