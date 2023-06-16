#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random alphabet and compare to z
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
