#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - function
 * Description :Take last number on n
 * Check and print if it is > 5, is zero, < 6 but > 0
 * Return: 0
*/
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	/* your code goes there */
	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
