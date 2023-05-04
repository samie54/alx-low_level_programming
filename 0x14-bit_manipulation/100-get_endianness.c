#include "main.h"

/**
 * get_endianness - function to check the endianness
 *
 * Return: 0 (big endian), 1 (little endian)
 */

/********************* endianness code *******************/

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
