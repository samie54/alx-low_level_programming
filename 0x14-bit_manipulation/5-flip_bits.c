#include "main.h"

/**
 * flip_bits - function to return number of bits needed to flip
 * get from one number to another
 * @n: starting number one.
 * @m: targeting number two.
 *
 * Return: number of flipped bits.
 */

/*********** unsigned int flip bits code **************/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)

	{
		nbits += xor & 1;
		xor >>= 1;
	}

	return (nbits);
}
