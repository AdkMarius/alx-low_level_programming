#include "main.h"
#include <ctype.h>

/**
 * cap_string - check the code
 * @s: An array of string
 *
 * Return: An array of string
 */
char *cap_string(char *s)
{
	char tab[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == tab[j])
			{
				if ((s[i + 1] >= 'a' && s[i + 1] <= 'z') || (s[i + 1] >= 'A' && s[i + 1] <= 'Z'))
					s[i + 1] = toupper(s[i + 1]);
				break;
			}
		}
	}
	return (s);
}
