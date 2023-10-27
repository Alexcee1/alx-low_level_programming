#include "main.h"
/**
 *_memcpy - a function that copies memory 
 *@dest: This is where memory is copied memory
 *@src: This is where memory is copied memory
 *@n:Here is number of byte
 *
 *Return: copied memory with n byte that is changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

