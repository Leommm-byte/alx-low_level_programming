#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: array
 * @n: number of element in array
 *
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
