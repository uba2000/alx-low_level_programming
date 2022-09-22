#include "main.h"

/**
 * *leet - transform to leet
 * @s: string to leet
 * Return: s transformed
 */

char *leet(char *s)
{
	int i, k;
	char s1 = "aeotl";
	char S1 = "AEOTL";
	char s2 = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 5; k++)
		{
			if (s[i] == s1[k] || s[i] == S1[k])
			{
				s[i] = s2[k];
				break;
			}
		}
	}
	return (s);
}
