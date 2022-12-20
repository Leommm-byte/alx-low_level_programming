#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 *
 * @str: input
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int k;

	while (str[i] != '\0')
		i++;

	if ((i % 2) != 0)
		k = ((i - 1) / 2) + 1;
	else
		k = (i / 2);

	for (; k < i; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
