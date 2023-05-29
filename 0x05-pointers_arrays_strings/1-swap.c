#include "main.h"
/**
  * swap_int - swaps the values of integers
  * @a: integer to swap
  * @b: integer to swap
  */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
