#include <stdio.h>
void __attribute__((constructor)) calledFirst(void);
/**
 * calledFirst - Function to be executed before the main function
 * Return: void
 */
void calledFirst(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
