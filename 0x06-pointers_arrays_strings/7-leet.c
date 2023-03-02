#include "main.h"

/**
 * leet - check the code
 * @s: An array of string
 *
 * Return: An array of string
 */
char *leet(char *s)
{
	char tab1[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char tab2[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		for (j = 0; j < 10; j++)
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
