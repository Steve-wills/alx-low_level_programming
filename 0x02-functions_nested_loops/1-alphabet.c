#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase, folowed by a new line.
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		++alpha;
	}
	_putchar('\n');
}
