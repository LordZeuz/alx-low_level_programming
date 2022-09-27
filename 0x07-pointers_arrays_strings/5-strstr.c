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

	for (index = 0; haystack[index] >= '\0'; index++)
	{
	if (haystack[index] == needle)
	return (haystack + index);
	}

	return ('\0');



	/**
	 *while (*haystack != '\0')
	*{
	*str1 = haystack;
	*str2 = needle;
	*
	*while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
	*{
	* haystack++;
	* str2++;
	*}
	*if (*str2 == '\0')
	*return (str1);
	*haystack = str1 + 1;
	*}
	*return (0);
	*/
}
