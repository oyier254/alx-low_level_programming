#include "main.h"
#include <string.h>

/**
 * _strncpy - function to copy a string
 * @dest: destination string
 * @src: source string
 * @n: length of int
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
