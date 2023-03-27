#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * reset_to_98 - Takes a pointer to an int and
 * updates the value it points to 98
 * swap_int - swaps values of 2 integers
 * _strlen - returna length of string
 * _puts - prints a string, followed by a new line, to stdout
 * @n: A pointer to an int
 */
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
#endif /* MAIN_H */
