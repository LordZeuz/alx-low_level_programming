#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the integer value it receives
 * Description: checks if alphabet
 * Return: 1 if true. 0 if false
 */

int _isalpha(int c)
{
	char lower = 'a', capital = 'A';

	while (lower <= 'z' || capital <= 'Z')
	{
	if (c == lower || c == capital)
	return (1);
	lower++;
	capital++;
	}
	return (0);
}
