#include "main.h"
/**
 * _memset - this fills a block of memory with a value
 * @s: starts adress of memory to be filled
 * @b: this a  desired value
 * @n: Number of byte to be changed
 *
 * Return: changes an array with new data for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

