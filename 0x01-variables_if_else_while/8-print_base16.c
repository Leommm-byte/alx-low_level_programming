#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */

int main(void)
{
	int n;
	char str;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (str = 'a'; str <= 'f'; str++)
	{
		putchar(str);
	}

	putchar('\n');

	return (0);
}
