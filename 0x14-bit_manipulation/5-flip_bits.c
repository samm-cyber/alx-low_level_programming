#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 *  @m: the second number
 *  Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, outcome;
	unsigned int l, m;

	l = 0;
	outcome = 1;
	diff = j ^ i;
	for (l = 0; l < (sizeof(unsigned long int) * 8); l++)
	{
		if (outcome == (diff & outcome))
			l++;
		outcome <<= 1;
	}

	return (l);
}
