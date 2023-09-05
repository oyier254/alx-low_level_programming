#include "main.h"
#include <string.h>

/**
 *_strlen - function to get the length of a string
 * @s: the parameter
 *Return: returns length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	return (a);
}

