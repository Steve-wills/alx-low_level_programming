#include "main.h"
/**
 * main - check the code
 * print_alphabet - prints the alphabets in lowercase, folowed by a new line
 * Return: Always 0
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
