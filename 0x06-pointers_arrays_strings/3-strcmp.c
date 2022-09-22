#include "main.h"

/**
 * _srtncpy - copies a string from destination to source.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes to copy from source.
 * Return: a pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
}
