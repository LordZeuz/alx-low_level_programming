#include "main.h"
/**
 * print_numbers - A function that print the numbers from 0 to 9
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
