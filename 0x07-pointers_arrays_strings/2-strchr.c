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

	for (i = 0; s[i] != c; i++)
	{
	}

	return (s + i);
}
