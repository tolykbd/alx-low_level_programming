#include "main.h"
/**
 * _strstr - breacks the character array
 * @haystack: the charachter
 * @needle: the characher to cut
 * Return: pointer to the byte in s that matches one of the bytes in
 *accept, or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
			return (haystack + i);
	}
	return (0);
}
