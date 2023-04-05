/**
 * _sqrt_recursion - a function that get natural sqrt
 * @n: number
 *
 * Return: sqrt of n or -1 if not exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
