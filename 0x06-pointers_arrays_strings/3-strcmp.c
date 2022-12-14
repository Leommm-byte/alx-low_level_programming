#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: -15 if not greater, 15 if greater or 0 if the same
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}
		c++;
	}

	return (r);
}
