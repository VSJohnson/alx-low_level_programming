#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - enty point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is geater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is zero", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not zero", n, m);
	printf("\n");
	return (0);
}
