#include "main.h"

/**
 * rev_string - reversing a string
 * @s: parameter s
 */

void rev_string(char *s)
{
	char temp;
	int i, len, half;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;

	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}

}
