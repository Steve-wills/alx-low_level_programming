#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @p: string to modify
 * Return: the resulting string
 */

char *string_toupper(char *p)
{
	int a;

	for (a = 0; p[a] != '\0'; a++)
	{
		if (p[a] >= 'a' && p[a] <= 'z')
			p[a] -= 32;
	}

	return (p);
}
