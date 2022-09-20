#include "main.h"
/**
 *_strlen- finds the length of a string
 *@s: parameter for string length
 *Return: int
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
	count++;
	}

	return (count);
}
