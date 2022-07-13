#include "main.h"

/**
 * swap_int - swaps values
 * @a: 1st integer
 * @b: 2nd integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	
	*a = *b;
	*b = c;
}
