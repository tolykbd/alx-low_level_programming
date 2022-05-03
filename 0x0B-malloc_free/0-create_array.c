#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char using malloc
 * @size: size of array
 * @c: character of c
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
