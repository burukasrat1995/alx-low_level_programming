#include <stdio.h>
/**
 * main - main function
 * Return: int
 */
int main(void)
{
	long double a = 1, b = 2, b1 = 0;
	int loop = 0;

	while (loop < 97)
	{
		printf("%Lf, ", a);
		b1 = b;
		b = a + b;
		a = b1;
		loop++;
	}
	printf("%Lf\n", a);
	return (0);
}

