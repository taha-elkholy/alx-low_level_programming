int _sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - calculates the square root of a number using recursion
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	/* base case: square root of 0 or 1 is itself */
	if (n == 0 || n == 1)
		return (n);
	/* recursive case: improve guess by averaging with n/guess */
	int guess = _sqrt_helper(n, n / 2);

	if (guess * guess == n)
		return (guess);
	else
		return (-1);
}

/**
 * _sqrt_helper - calculates the square root of a number using recursion
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the improved guess for the square root of n
 */
int _sqrt_helper(int n, int guess)
{
	/* base case: guess is a good enough approximation */
	if (guess * guess <= n && (guess + 1) * (guess + 1) > n)
		return (guess);
	/*Recursive case: improve guess by averaging with n/guess */
	int new_guess = (guess + n / guess) / 2;

	return (_sqrt_helper(n, new_guess));
}
