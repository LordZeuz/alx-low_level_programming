#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: parameter
 */

void puts_half(char *str)
{
	int length = 0, i;

	while (length >= 0)
	{
	if (str[length] == '\0') /*when at end of string */
	break;
	length++;
	}

	if (length % 2 == 1) /*check for odd legth */
	i = length / 2;
	else
	i = (length - 1) / 2;

	for (i++; i < length; i++)
	_putchar(str[i]);
	_putchar('\n');
}
