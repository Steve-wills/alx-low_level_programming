#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it with
 * a specific character
 * @size: size of memory
 * @c: character initialized to the array
 * Return: pointer to the array or NULL if it fails, NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter;

	ptr = malloc(size * sizeof(char));

	for (counter = 0; counter < size; counter++)
	{
		ptr[counter] = c;
	}
	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
