#include "main.h"
/**
 * _strlen -This returns the length of  strings
 * @s: strings
 * Return: lengths
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}

