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
	int dlen1 = 0, dlen2 = 0;

	while (s1[dlen1])
		dlen1++;
	while (s2[dlen2])
		dlen2++;

	if (dlen1 == dlen2)
		return (0);
	else if (dlen1 < dlen2)
		return (-15);
	else
		return (15);
}
