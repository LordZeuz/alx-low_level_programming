#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return str 1 or 0
 **/

char  *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	return (haystack);

	while (*haystack)
	{
	index = 0;

	if (haystack[index] == needle[index])
	{
	do {
	if (needle[index + 1] == '\0')
	return (haystack);

	index++;

	} while (haystack[index] == needle[index]);
	}

	haystack++;
	}

	return ('\0');
}
