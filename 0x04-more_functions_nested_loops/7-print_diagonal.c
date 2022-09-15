#include "main.h"

/**
 * print_diagonal - prints diagonal line.
 * @n: input number of times a diagonal is printed.
 * 
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
