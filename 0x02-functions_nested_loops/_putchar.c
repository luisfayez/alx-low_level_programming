#include "main.h"
#include <unistd.h>

/**
 * _putchar - write out the char c to standout
 * @c: the characyer to print
 *
 * Return: on success 1
 */ 
int _putchar(char c)
{
	return (write(1, &c, 1))
}
