#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n, o;

	n = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	for (o = 0; o < n; o++)
	{
		dest[o] = src[o];
	}
	dest[o] = '\0';

	return (dest);
}
