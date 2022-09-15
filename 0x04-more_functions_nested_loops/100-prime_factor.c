#include <stdio>

/**
 * main - prints prime factor of a number.
 * Return: Always 0.
 */
int main(void)
{
	long int n, pf;

	n = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
		while(n / pf == 0)
		{
			printf("%ld", pf);
			n = n / pf;
		}
	}
	printf("\n");
	return (0);
}
