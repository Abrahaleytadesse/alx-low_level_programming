#include "main.h"

/**
 * main - print lowercase alphabets
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int n;
	for(n=97, n<123, n=n+1)
	{
		_putchar(n);
	}
	_putchar('\n');
}
