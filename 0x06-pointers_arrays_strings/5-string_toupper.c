#include "main.h"

/**
 * string_toupper - converting any string to upper case
 * @j: string parameter
 * Return: string
 */

char *string_toupper(char *j)
{
	int a = 0;

	while (j[a])
	{
		if (j[a] >= 97 && j[a] <= 122)
			j[a] = j[a] - 32;
		a++;
	}
	return (j);
}
