#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: pointer to array of size ac
 * Return: NULL if ac == 0 or av == null, Pointer to new string,
 * NULL on fail
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i, j, k = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	args = malloc((sizeof(char) * size) + 1);
	if (args == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			args[k] = av[i][j];
			j++;
			k++;
		}
		args[k] = '\n';
		k++;
		i++;
	}
	args[k] = '\0';
	return (args);
}
