#include "main.h"
/**
 * main - prints the largest of 3 numbers
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largestNumber;

	if (a > b && b > c)
	{
		largestNumber = a;
	}
	else if (b > a && a > c)
	{
		largestNumber = b;
	}
	else
	{
		largestNumber = c;
	}
	return (largestNumber);
}

int main(void)
{
	int largest = largest_number(972, -98, 0);

	printf("%d is the largest number", largest);
	return (0);
}
