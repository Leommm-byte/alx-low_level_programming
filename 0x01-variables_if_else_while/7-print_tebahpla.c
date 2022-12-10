#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0
 */

int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
	{
		putchar(str);
	}
	putchar('\n');

	return (0);
}
