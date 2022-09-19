#include "main.h"

/**
 * _strlen - length of a string
 * @s: character to get length
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
