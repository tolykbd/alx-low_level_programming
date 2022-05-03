#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy the string
 * @str: string to be copied
 *
 * Return: array pointer to new string memory address
 */
char *_strdup(char *str)
{
	int i, j;
	char *newString;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	newString = malloc(sizeof(*newString) * i);
	if (newString == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		newString[j] = str[j];

	return (newString);
}
