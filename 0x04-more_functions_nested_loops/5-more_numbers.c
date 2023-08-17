#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * followed by a new line
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; ++x)
	{
		for (y = 0; y <= 14; ++y)
		{
			_putchar('0' + y);
		}
	}
	_putchar('\n');
}
