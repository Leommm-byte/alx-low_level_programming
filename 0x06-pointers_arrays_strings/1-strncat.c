#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: destination input
 * @src: source input
 * @n: number of byte
 *
 * Return: Return a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
		dlen++;

	while (i < n && src[i])
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
