#include "main.h"
#include <unistd.h>

/**
* _putchar - writes character c to stdout
* @c: The character to be printed
* 
* Return: 1 is returned on success
* On error, return -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
