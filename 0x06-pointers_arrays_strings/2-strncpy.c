#include "main.h"
/**
* _strncpy - concatnate two strings
* @dest: first string to be appended
* @src: second string
* @n: number of bytes
* Return: concatnate string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}