#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters from source string to be appended
 * Return: return pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)

	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);

}
