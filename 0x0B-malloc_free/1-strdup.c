#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter
 * @str: string to be duplicated
 * Return: pointer to new string, NULL if it fails
 */

char *_strdup(char *str)
{
	char *ptr;
	int c, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	ptr = malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
	{
		ptr[c] = str[c];
	}
	ptr[c] = '\0';

	return (ptr);
}
