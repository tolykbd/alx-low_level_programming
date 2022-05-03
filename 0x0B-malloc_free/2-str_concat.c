#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatnate a two string
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatnated sring or null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, length;
	char *concatStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* length of s1*/
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	/* length of s2*/
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	length = i + j + 1;
	concatStr = malloc(sizeof(*concatStr) * length);
	if (concatStr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		if (s1[i] == '\0')
		{
			j = 0;
			while (i < length)
			{
				concatStr[i] = s2[j];
				j++;
				i++;
			}
			break;
		}
		concatStr[i] = s1[i];
	}

	return (concatStr);
}
