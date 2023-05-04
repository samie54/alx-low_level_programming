#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - function to return value of a bit at given index
 * @n: unsigned long int input
 * @index: index of bit
 *
 * Return: value of bit (0 | 1)
 */

/***************** Bit return value code ***************/

int get_bit(unsigned long int n, unsigned int index)
{
int bit;
bit = ((n >> index) & 1);

if (index > 64)
return (-1);
return (bit);
}
