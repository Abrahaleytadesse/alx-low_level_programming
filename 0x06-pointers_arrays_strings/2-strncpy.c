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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
