#include <stdio.h>

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - prints a sentence before the main
 * thus, _constructor executes before main()
 * function is executed
 */
void _constructor(void)
{
		printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");
}

