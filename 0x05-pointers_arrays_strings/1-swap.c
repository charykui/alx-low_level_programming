#include "main.h"

/**
 * swap_int -a funcction that swaps
 * @a: integer pointer
 * @b: integer pointer
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;

	*b = n;

}
