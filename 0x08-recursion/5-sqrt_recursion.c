#include "main.h"
int _sqrt_recursion_helper(int n, int guess);
/**
 * _sqrt_recursion - Calculates the square root of a number using recursion
 * @n: The number for which to calculate the square root
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion_helper(n, 0));
}
/**
 * _sqrt_recursion_helper - Helper function to calculate the square root
 * @n: The number for which to calculate the square root
 * @guess: The current guess for the square root
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion_helper(int n, int guess)
{
if (guess * guess > n)
return (-1);
if (guess * guess == n)
return (guess);
return (_sqrt_recursion_helper(n, guess + 1));
}
