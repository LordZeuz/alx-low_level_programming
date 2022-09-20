#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: parameter
 */

void print_rev(char *s)
{
	int i = 0; /*i checks for end of string */
	int j; /*j = i - 1 is the last character before \0 */

	while (s[i] != '\0')
	{
	i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
	_putchar(s[j]);
	}
	_putchar('\n');
}
