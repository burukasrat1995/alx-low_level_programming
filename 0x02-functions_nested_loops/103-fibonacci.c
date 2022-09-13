#include <stdio.h>
/**
 * main - main function
 * Return: int
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int b1 = 0;
	long int sum = 0;
	int loop = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
			sum =+ a;
		b1 = b;
		b = a + b;
		a = b1;
		loop++;
	}
	printf("%ld\n", sum);
	return (0);
}

