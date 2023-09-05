#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: write the alphabets in reverse order
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}


