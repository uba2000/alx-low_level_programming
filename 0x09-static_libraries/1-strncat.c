#include "main.h"

/**
 * *_strncat - concatenate two strings using
 * atmost `n` bytes from src
 * @dest: destination pointer
 * @src: source pointer
 * @n: int of src to concatenate
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k = 0;

	while (dest[k] != '\0')
		k++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[k + i] = src[i];
	dest[k + i] = '\0';

	return (dest);
}
