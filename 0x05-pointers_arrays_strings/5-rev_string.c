#include "main.h"
/**
 * rev_string - a function that reverses a string.
 *
 * @s: input
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	int k = 0;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
