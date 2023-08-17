#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int r, s;

		for (r = 0; r < n; ++r)
		{
			for (s = 0; s < r; ++s)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}

}
