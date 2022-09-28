#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of a string.
 * @s: string.
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
