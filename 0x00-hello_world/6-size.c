#include <stdio.h>
/*main - prints out the function size of
  Description: using the sizeof() and printf function, we print out the size of the various types in C
*/

int main (void)
{
  char c;
  int i;
  long li;
  long long lli;
  float f;
  printf("Size of a char: %ld byte(s)\n", sizeof(c));
  printf("Size of an int: %ld byte(s)\n", sizeof(i));
  printf("Size of a long int: %ld byte(s)\n", sizeof(li));
  printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
  printf("Size of a float: %ld byte(s)\n", sizeof(f));
  return (0);
}
	
