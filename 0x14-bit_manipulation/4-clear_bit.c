#include "main.h"

/**
 * clear_bit - function to set value of a bit to 0.
 * at a given index.
 * @n: pointer to a number of an unsigned long int.
 * @index: index of the bit to set to 0
 *
 * Return: 1 if it worked, else -1 if it didn't.
 */

/*************** value of bit to 0 code **************/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);
if ((*n >> index) & 1)
{
*n -= 1 << index;
return (1);
}
return (1);
}
