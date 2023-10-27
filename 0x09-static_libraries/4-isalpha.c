#include "main.h"
		
/**
 * _isalpha - checks for the alphabetic characters
 * @c: the characters that will be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
