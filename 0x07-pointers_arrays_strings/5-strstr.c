#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: string to find
 * Return: NULL  if no find
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			n = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] == needle[j])
				{
					i++;
					if (needle[j + 1] == '\0')
						return (haystack + n);
				}
				else
					break;
			}
		}
	}
	return (0);
}
