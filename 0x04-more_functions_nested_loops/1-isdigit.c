#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: input
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int h;

	for (h = 48; h <= 57; h++)
	{
		if (c == h)
		{
			return (1);
		}
	}
	return (0);
}
