#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;
	char let;

	for (m = 0; m < 10; ++m)
	{
		putchar((m % 10) + '0');
	}

	for (let = 'a'; let <= 'f'; ++let)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);

}
