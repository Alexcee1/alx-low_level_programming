#include <stdio.h>
/**
* main - This prints the number of arguments that is passed into it.
* @argc: arguments counts
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
(void)argv;

printf("%d\n", argc - 1);
return (0);
}
