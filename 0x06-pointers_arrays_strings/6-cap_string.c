#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @q: string to modify
 * Return: the resulting string
 */

char *cap_string(char *q)
{
	int i, j;

	char s[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; q[i] != '\0'; i++)
	{
		if (i == 0 && q[i] >= 'a' && q[i] <= 'z')
			q[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (q[i] == s[j])
			{
				if (q[i + 1] >= 'a' && q[i + 1] <= 'z')
				{
					q[i + 1] -= 32;
				}
			}
		}
	}

	return (q);
}
