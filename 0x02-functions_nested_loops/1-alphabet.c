#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - Print alphabet
 * in lower case followed by \n
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
