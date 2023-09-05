#include "main.h"

int _sqrt(int, int);

/**
* _sqrt_recursion -> sqrt using recursion
* @n: parameter to be sqrt
* Return: square root of a number
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt -> recursive square root
* @n: number
* @j: iterator
* Return: a number
*/
int _sqrt(int n, int j)
{
	int square = j * j;

	if (square > n)
		return (-1);
	if (square == n)
		return (j);
	return (_sqrt(n, j + 1));
}
