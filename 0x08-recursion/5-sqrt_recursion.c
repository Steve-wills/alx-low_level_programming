#include "main.h"

/**
 * _sqrt_recursion - function to return the square root of n
 * @n: number to be used
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	i = _sqrt_recursion(n - 1) + 1;
	if (i * i > n)
		return (-1);
	else
		return (i);
}
