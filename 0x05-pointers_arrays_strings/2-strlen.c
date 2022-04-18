#include "main.h"
/**
* _strlen - calculates length of s
* @s: string to be calculated
* Return: number of length;
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i--);
}
