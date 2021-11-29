#include "main.h"

/**
 *prime_counter - verifies prime number
 *@n: the given number to be verified
 *@prime: number to check if it's prime
 *Return: if number is prime
 */

int prime_counter(int n, int prime)
{
	if (n % prime == 0)
		return (0);

	if (n / prime < prime)
		return (1);

	return (prime_counter(n, prime + 1));
}

/**
 *is_prime_number - function that returns a prime number
 *@n: numbers to check
 *Return: 1 if is a valid prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int prime = 2;

	if (n <= 1)
		return (0);

	return (prime_counter(n, prime));
}
