#include "main.h"

/**
 * reverse_array - reverses the content of array
 * @a: array to be reversed
 * @n: number of elements in array to be reversed
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
