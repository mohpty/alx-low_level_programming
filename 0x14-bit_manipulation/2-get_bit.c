#include "main.h"

/**
 * get_bit - get the state of a given index in binary representation
 * of the number given
 * @n: number
 * @index: the bit asked for
 * Return: bit value, 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((1 << index) & n ? 1 : 0);
}
