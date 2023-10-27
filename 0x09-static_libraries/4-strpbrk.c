#include "main.h"
/**
 * _strpbrk - This Entry point
 * @s: inputs value
 * @accept: inputs value
 * Return: This Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}


return ('\0');
}
