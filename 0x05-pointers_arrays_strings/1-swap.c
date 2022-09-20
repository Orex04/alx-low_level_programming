#include "main.h"

/**
 * swap_int - swaps the value pointed to by arguments
 *
 * @a: pointer argument 1
 * @b: pointer argument 2
 */

void swap_int(int *a, int *b)
{
	int con = *a;

	*a = *b;
	*b = con;
}
