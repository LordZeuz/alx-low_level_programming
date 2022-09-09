#include <stdio.h>
#include<stdlib.h>
#include<time.h>
/*
 *main - returns zero while statement is true
 *Description: using the rand function
 *we generate random numbers
*/
int main(void)
{
	int n;

	srand(time(NULL));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
