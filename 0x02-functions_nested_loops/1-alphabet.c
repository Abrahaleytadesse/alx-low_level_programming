#include "main.h"

/**
 * main - print lowercase alphabets
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int j;
	for( j = 97; j < 123; j = j+1)
	{
		_putchar(j);
	}
	_putchar('\n');
}
