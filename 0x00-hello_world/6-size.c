#include <stdio.h>
/**
 * main - print the sizes of various types
 *
 * Description: using the main function
 * this program prints "the size of types using sizeof"
 * Return: 0
 */
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

 printf("Size of a char: %c byte(s)\n") sizeof(c);
 printf("Size of an int: %d byte(s)\n") sizeof(i);
 printf("Size of a long int: %ld byte(s)\n") sizeof(li);
 printf("Size of a long long int: %lld byte(s)\n") sizeof(lli);
 printf("Size of a float: %f byte(s)\n") sizeof(f);
 return (0);
}
