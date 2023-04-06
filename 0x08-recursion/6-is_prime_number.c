/**
 * is_prime - check if number is prime or not
 * @n: int number n
 * @i: int iterator
 *
 * Return: On success 1 or 0 if not prime
 */
int is_prime(int n, int i)
{
	if ((n <= 1) || (n % i == 0))
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - check if number is prime or not
 * @n: int number n
 *
 * Return: On success 1 or 0 if not prime
 */
int is_prime_number(int n)
{
	int i = 2;

	return (is_prime(n, i));
}
