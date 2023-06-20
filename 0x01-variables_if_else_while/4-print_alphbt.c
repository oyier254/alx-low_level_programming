#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: Get a random alphabet and print in lower case
 * Return: 0
 */

int main(void)
{
	char ch, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
		putchar(low);

	}
	putchar('\n');
	return (0);
}
