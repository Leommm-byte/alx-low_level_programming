#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: 0 to 9, followed by a new line without 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			i++;
		_putchar(i + '0');
	}
	_putchar('\n');
}