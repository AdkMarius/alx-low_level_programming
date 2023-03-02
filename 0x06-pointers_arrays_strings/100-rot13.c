#include "main.h"

/**
 * rot13 - check the code
 * @s: An array string
 *
 * Return: An array string
 */
char *rot13(char *s)
{
	char tab1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tab2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; tab1[j] != '\0'; j++)
		{
			if (s[i] == tab1[j])
			{
				s[i] = tab2[j];
				break;
			}
		}
	}
	return (s);
}
