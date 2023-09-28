#include "main.h"


/**
 * _isprime - actively check if a number is prime
 * @n: the number
 * @i: iterator
 */
int _isprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return _isprime(n, i - 1);
}

/**
 * is_prime_number - check if the number is prime
 * @n: the number
 * return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return _isprime(n, n-1);

}
