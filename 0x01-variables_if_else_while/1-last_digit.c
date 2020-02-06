#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
	int n;
	int LastDigital;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigital = n % 10;

	if (LastDigital > 5)
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, LastDigital);
	else if (LastDigital == 0)
		printf("Last digit of %d is %d and is 0\n", n, LastDigital);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, LastDigital);

	return (0);
}
