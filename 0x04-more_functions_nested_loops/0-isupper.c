#include "main.h"
/**
 * _isupper - A function that checks for uppercase character.
 *
 * @c: is the character to  check
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	int letter = 'A';

	while (letter <= 'Z')
	{
		if (letter == c)
		{
		return (1);
		}
		else
		return (0);
	}
}
