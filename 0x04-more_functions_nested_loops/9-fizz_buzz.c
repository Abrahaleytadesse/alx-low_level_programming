#include <stdio.h>

/**
 * main - prints numbers from 0 to 100 and multiple of 
 * 3 are replaced with Fizz and Multple 5 with Buzz.
 * Return: returns 0.
 */
int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else 
		{
			printf("%d ", i);
		}
	}
}	
