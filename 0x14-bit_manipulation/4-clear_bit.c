#include <stdio.h>
#include "main.h"
/**
  * clear_bit - clears all bits to 0
  * @n: input
  * @index: input
  * Return: -1 on error 1 on success
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;
	
	if (index > 63)
		return (-1);
	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
