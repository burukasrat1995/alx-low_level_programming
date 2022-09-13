#include <stdio.h>
/**
 * main - main function
 * Return: int
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int b1 = 0;
	int loop = 0;

	while (loop < 97)
	{
		printf("%lu, ", a);
		b1 = b;
		b = a + b;
		a = b1;
		loop++;
	}
	printf("%lu\n", a);
	return (0);
}

