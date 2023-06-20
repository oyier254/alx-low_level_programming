#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';

		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);
}
