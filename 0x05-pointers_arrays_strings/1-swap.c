#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int ab;

	ab = *a;
	*a = *b;
	*b = ab;
}
