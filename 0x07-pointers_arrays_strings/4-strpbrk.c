#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*looping through characters in  s */
	{
	j = 0;
	while (accept[j] != '\0')/*nested loop through *accept*/
	{
	if (*s == accept[j])/*compare and evaluate current value of *s with accept*/
	{
	return (s);
	}

	j++;
	}

	s++;
	}
	return (0);

}
