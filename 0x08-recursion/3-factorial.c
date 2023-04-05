/**
 * factorial - a function that get factorial
 * @n: number
 *
 * Return: factorial of n.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	return (n * factorialn(n - 1));
}
