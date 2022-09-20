#include "main.h"

/**
 * puts2 - skips every %2 character
 * @str: string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') /*checks for end of string */
	{
	if (i % 2 == 0) /*skips second character*/
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
