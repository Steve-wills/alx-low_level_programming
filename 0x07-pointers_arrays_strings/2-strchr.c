#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to locate a character in a string
 * @s: string
 * @c: character to be located
 * Return: pointer to the first occurence of c in string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
