#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	Srand(time(0));
	n = rand() - RAND_MAX / 2;

	a = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is gerater than 5/n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d is 0\n", n, a);
	}
	return (0)
}
