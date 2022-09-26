#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*loop through string*/
	{
	if (*s == c) /*if character c is found in string */
	{
	return (s); /*return s*/
	}
	s++;
	}
	return (0);/*return null value if c is not in string*/
}
