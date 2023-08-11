#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alfabet;

	for (alfabet = 'a'; alfabet <= 'z'; ++alfabet)
	{
		if (alfabet != 'q' && alfabet != 'e')
			putchar(alfabet);
	}
	
	putchar('\n');

	return (0);
}

