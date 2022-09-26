#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: address data is to be copied to
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)  /*loop until n byte is reached*/
	{
	*(dest + i) = *(src + i); /*add 1 position dest and src*/
	i++;

	} /*end loop*/

	return (dest);
}
