#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * solve task in 0x01.c
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
    char last[] = "Last digit of";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	/* your code goes there */
	printf("%s %d is %d and is ", last, n,lastDigit );
	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);

}