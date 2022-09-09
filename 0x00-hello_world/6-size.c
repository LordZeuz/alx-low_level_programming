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
char a;
int b;
long c;
long long d;
float f;

 printf("Size of a char: %ld byte(s)\n") sizeof(a);
 printf("Size of an int: %ld byte(s)\n") sizeof(b);
 printf("Size of a long int: %ld byte(s)\n") sizeof(c);
 printf("Size of a long long int: %ld byte(s)\n") sizeof(d);
 printf("Size of a float: %ld byte(s)\n") sizeof(f);
 return (0);
}
