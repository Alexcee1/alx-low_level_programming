#include "main.h"
		
/**
 * char *_strcpy -This is a function that copies the stringe pointed to by src
 * @dest: this copy to
 * @src:this copy from
 * Return: strings
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;


	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

