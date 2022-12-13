#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	write(1, "9, 8, 10, 24, 75 9\n", 20);
	write(1, "Please make me win!\n", 21);
	exit(EXIT_SUCCESS);
}
