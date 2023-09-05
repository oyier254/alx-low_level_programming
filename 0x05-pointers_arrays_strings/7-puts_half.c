#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of the string
 * @str: str parameter
 */

void puts_half(char *str)
{
	int i, j, k;

	i = strlen(str);

	if (i % 2 == 1)
		j = i / 2 + 1;
	else
		j = i / 2;

	for (k = j; k < i; k++)
		_putchar(str[k]);

	_putchar('\n');
}
