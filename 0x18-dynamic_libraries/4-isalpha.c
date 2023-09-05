#include "main.h"

/**
 * _isalpha -check if a character is lowercase or uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase or uppercase, or otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
