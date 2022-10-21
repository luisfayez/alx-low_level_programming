#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: The prototype to print
 * Return: On success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}