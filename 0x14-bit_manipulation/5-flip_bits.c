#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips, temp;
	int shifts1, shifts2;

	flips = shifts1 = shifts2 = 0;
	for (temp = n; (temp >>= 1) > 0; shifts1++)
		;

	for (temp = m; (temp >>= 1) > 0; shifts1++)
		;

	shifts1 = shifts1 > shifts2 ? shifts1 : shifts2;
	for (; shifts1 >= 0; shifts1--)
	{
		if (!(((n >> shifts1) & 1) == ((m >> shifts1) & 1)))
			flips++;
	}

	return (flips);
}
