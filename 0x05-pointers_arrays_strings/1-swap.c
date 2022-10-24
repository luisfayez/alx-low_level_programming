#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:First argument that must be swapped.
 * @b:second argument that must be swapped.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
