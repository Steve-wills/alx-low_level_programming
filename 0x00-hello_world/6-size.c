#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu\n", sizeof(c));
	printf("Size of an int: %zu\n", sizeof(i));
	printf("Size of a long int: %zu\n", sizeof(li));
	printf("Size of a long long int: %zu\n", sizeof(lli));
	printf("Size of a float: %zu\n", sizeof(f));

	return (0);
}
