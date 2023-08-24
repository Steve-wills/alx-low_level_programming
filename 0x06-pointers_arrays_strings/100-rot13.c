#include "main.h"

/**
 * rot13 - encoding a string using rot13
 * @r: string to be encoded
 * Return: the string r
 */

char *rot13(char *r)
{
	int i, j;

	char *c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *d = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (r[i] == c[j])
			{
				r[i] = d[j];
			}
		}
	}
	return (r);
}
