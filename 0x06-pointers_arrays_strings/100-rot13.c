#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @z: string to encode
 * Return: address of z
 */

char *rot13(char *z)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(z + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(z + i))
			{
				*(z + i) = b[j];
				break;
			}
		}
	}
	return (z);
}
