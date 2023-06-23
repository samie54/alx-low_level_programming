#include <stdio.h>
#include "main.h"

/**************************************************
 Project: 0x18. C - Dynamic libraries

Date: 20/06/2023

Author: Samuel Atiemo
**************************************************/

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (EXIT_SUCCESS);
}
