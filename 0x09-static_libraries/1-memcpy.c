#include "main.h"
/**
 * _memcpy - fills the memory area
 * @dest: points to a memory area
 * @src: constant byte
 * @n: number of bytes
 * Return: a poniter to the memory of area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
