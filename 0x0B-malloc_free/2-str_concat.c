#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, len = 0;
	int i, j;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
	len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
	return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
	*(concat_str + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
	*(concat_str + i) = *(s2 + j);
	i++;
	}

	return (concat_str);
}
