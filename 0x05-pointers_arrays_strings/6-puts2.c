#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: input
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int k;

	while (str[i] != '\0')
		i++;

	for (k = 0; k < i; k += 2)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
