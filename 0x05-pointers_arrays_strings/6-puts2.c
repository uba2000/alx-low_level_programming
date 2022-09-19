#include "main.h"

/**
 * put2 - prints every other character
 * starting with first character (even characters)
 * @s: string to print from
 * Return: void
 */

void puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
