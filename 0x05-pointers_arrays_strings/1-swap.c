#include "main.h"

/**
 * swap_int - given two intergers, swap their values
 * @a: param 1
 * @b: param 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
