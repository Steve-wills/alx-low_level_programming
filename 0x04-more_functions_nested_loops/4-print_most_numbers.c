#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9,
 * excluding 2 and 4
 */

void print_most_numbers(void)
{
	int z;

	for (z = 0; z <= 9; ++z)
	{
		if (z != 2 && z != 4)
		{
			_putchar('0' + z);
		}
	}
	_putchar('\n');
}
