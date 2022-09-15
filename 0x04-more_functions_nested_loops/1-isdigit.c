#include "main.h"
/**
 * _isdigit - A function that checks for a digit.
 *
 * @c: is the character to  check
 *
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	int digit = 0;

	while (digit <= 9)
	{
	if (digit == c)
	{
	return (1);
	}
	digit++;
	}
	return (0);
}
