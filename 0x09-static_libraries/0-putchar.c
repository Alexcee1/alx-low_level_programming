#include <unistd.h> 
 
/** 
 * _putchar - write  character c in  stdout 
 * @c: The character to print 
 * 
 * Return: On success 1. 
 * On error -1 returns and errno is set appropriately. 
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 

