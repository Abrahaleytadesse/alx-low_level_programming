#include "main.h"

/**
 * _isdigit - checks for digits (0 through 9)
 * @c : is a digit from ASCII code 
 *
 * Return : 1 for the digits otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}	
