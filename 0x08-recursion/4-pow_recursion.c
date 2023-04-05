/**
 * _pow_recursion - a function that get pow
 * @x: number
 * @y: number
 *
 * Return: x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursionl(x, y - 1));
}
