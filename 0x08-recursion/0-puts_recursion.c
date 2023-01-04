#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 *
 * @s: input string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
