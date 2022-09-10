#include <stdio.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
	putchar(a + '0');
	}
	for (b = 'a'; b <= 'f'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
