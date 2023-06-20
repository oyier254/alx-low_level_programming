#include <stdio.h>
#include <stdlib.h>

/**
 * main - main  block
 * Description: prints all possible combination of two digits
 * Return: 0
 */

int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch < 58; ch++)
	{
		for (n = 49; n < 58; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);

				if (ch != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
