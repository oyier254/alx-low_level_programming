#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: prints all number in base 16 in lower case
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
