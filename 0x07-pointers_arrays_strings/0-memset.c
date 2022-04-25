#include "main.h"
/**
 * _memset - fills the memory area
 * @s: points to a memory area
 * @b: constant byte
 * Return: a poniter to the memory of area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
