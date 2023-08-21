#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string to be checked
 * Return: the lenth of the string
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
