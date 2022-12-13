#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet.
 * Return 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n, kt;

	for (kt = 1; kt <= 10; kt++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
