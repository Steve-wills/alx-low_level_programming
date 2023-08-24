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
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
