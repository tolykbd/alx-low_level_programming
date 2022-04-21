#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: seconed string
 * Return: 0 if equall
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	j = 0;
	for (i = 0; s1[i] != '\0' || s2[j] != '\0' ; i++)
	{
		k = s1[i] - s2[j];
		if (s1[i] != s2[j])
		{
			return (k);
		}
		j++;
	}

	return (0);
}
