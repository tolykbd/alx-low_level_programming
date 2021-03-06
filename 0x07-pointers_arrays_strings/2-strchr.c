#include "main.h"
/**
 * _strchr - cuts the memory area
 * @s: the character array
 * @c: the character
 * Return: a poniter to s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}

	return (s[i] == c ? (s + i) : '\0');
}
