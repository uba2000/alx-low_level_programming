#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
