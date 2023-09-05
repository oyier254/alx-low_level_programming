#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array a
 * @n: an element of an array
 */

void reverse_array(int *a, int n)
{
	int *b, j, aux, k;

	b = a;

	for (j = 1; j < n; j++)
		b++;

	for (k = 0; k < j / 2; k++)
	{
		aux = a[k];
		a[k] = *b;
		*b = aux;
		b--;
	}
}
