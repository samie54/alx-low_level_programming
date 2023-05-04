#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: pointer to a number
 * @index: index of the bit
 *
 * Return: On success 1, else -1
 */

/*************** Bit to 1 code *******************/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);
if (!((*n >> index) & 1))
{
*n += 1 << index;
return (1);
}
return (-1);
}
