#include "main.h"
/**
  * flip_bits - returns the number of bits you would need
  * to flip to get from one number to another.
  * @n: 1st input
  * @m: 2nd input
  * Return: the diferences
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff, mask = 0;
	int i, digit;
	unsigned int differences = 0;

	bit_diff = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		mask = 1 << i;
		digit = (bit_diff & mask) >> i;
		if (digit == 1)
			defferences++;
	}
	return (differences);
}
