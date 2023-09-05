#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int d, g, next, sum;

	d = 1;
	g = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (d < 4000000 && (d % 2) == 0)
		{
			sum += d;
		}
		next = d + g;
		d = g;
		g = next;
	}

	printf("%lu\n", sum);

	return (0);
}
