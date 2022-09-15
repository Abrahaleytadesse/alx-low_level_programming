#include "main.h"

/**
 * print_numbers - prints numbers from 0 upto 9
 * return: no return 
 */
void print_numbers(void)
{
	int num;
	
	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
