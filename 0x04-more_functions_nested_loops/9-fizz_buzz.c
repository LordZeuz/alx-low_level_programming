#include <stdio.h>
/**
 * main  - the entry point
 *
 * Return: 0 if the program run with success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	else
	printf(" %d ", i);
	}
	return (0);
}
