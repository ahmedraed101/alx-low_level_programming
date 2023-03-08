
int is_prime(int n, int i);

/**
 * is_prime_number - checks if number is prime
 * @n: number to check if prime
 *
 * Return: 1 if n is prime number of 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime - checks if numebr is prime
 * @n: number to check
 * @i: itration number
 *
 * Return: 1 if prime 0 otherwisw
 */

int is_prime(int n, int i)
{
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) > i)
		return (1);
	return (is_prime(n, i + 1));

}
