#include "math.h"
/**
 * _isalpha - checks if character is an alphabet
 * @c: character to be checked
 * Return: 1 if character is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}
