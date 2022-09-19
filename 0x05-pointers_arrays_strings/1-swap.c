#include "main.h"

/**
 * swap_int - swaps values of two integers.
 * @a: value of first integer.
 * @b: value of second integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
