#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char let = 'a';

	while (++i < 10)
	{
		while (++let <= 'z')
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
