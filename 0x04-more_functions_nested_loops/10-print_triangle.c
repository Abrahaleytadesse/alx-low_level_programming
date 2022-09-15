#include "main.h"

/**
 * print_triangle - prints a triangle of hashes.
 * @size: size of the triangle.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i); j++)
			_putchar(' ');
		for (k = 0; k <= i; k++)
			_putchar('#');
		if ( i < (size -1))
			_putchar('\n');
	}
	_putchar('\n');
}
