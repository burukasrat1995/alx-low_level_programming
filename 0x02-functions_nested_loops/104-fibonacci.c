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
	int loop = 0;

	while (loop < 97)
	{
		printf("%ld, ", a);
		b1 = b;
		b = a + b;
		a = b1;
		loop++;
	}
	printf("%ld\n", a);
	return (0);
}

