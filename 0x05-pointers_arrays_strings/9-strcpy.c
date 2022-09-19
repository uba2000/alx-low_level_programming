#include "main.h"

/**
 * _strcpy - copies string pointed by src to dest
 * @dest: destination variable
 * @src: source variable
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
