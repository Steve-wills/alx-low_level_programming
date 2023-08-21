#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string to be checked
 * Return: the lenth of the string
 */

int _strlen(char *s)
{
	int t;

	for (t = 0; s[t] != '\0'; ++t)
		return (t);
}
