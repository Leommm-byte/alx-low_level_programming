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
		if (str == 'q' || str == 'e')
		{
			continue;
		}
		else
		{
			putchar(str);
		}
	}
	putchar('\n');

	return (0);
}
