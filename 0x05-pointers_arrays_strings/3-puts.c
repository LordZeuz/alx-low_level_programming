#include "main.h"
/**
 * _puts - posts to stdout
 * @str: paramameter for _puts
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}

	_putchar('\n');
}
