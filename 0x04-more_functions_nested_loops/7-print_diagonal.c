#include "main.h"

/**
 * print_diagonal - print line diagonal
 * @n: int parameter
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}
