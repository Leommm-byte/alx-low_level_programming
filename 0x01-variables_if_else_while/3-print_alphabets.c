#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	for (str = 'A'; str <= 'Z'; str++)
	{
		putchar(str);
	}

	putchar('\n');

	return (0);
}
