#include "main.h"
/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string and the length is to be found.
 *Return: must return the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;
	/*incremeant up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
