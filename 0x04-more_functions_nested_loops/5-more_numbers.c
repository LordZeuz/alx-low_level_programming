#include "main.h"
/**
 * more_numbers - A function who print 10 times the numbers, from 0 to 14
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
	for (j = 0; j < 15; j++)
	{
	if (j >= 10)
	{
	_putchar((j / 10) + 48);
	}
	_putchar((j % 10) + 48);
	}

	_putchar('\n');

	i++;
	}
}
