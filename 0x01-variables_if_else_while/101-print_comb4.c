#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Three number combination
 * Return: 0
 */

int main(void)
{
	int ch;
	int n;
	int m;

	for (ch = 48; ch < 58; ch++)
	{
		for (n = 49; n < 58; n++)
		{
			for (m = 50; m < 58; m++)
				if (n > ch && m > n)
				{
					putchar(ch);
					putchar(n);
					putchar(m);

					if (ch != 55 || n != 56 || m != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}

	putchar ('\n');
	return (0);
}
