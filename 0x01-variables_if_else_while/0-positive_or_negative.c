#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand(time(NULL));
	int n;

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
