#include "main.h"

/**
 * leet - a leet function
 * @x: param x
 * Return: a string
 */

char *leet(char *x)
{
	int i = 0, j, k = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (x[i])
	{
		j = 0;

		while (j < k)
		{
			if (x[i] == tr[j] || x[i] - 32 == tr[j])
				x[i] = trw[j];
			j++;
		}
		i++;
	}
	return (x);
}
