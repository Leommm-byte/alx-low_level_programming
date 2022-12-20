#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: input
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
		i += 1;

	return (i);
}
