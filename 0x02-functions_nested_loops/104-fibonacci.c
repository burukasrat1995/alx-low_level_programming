#include <stdio.h>
/**
 * main - main function
 * Return: int
 */
int main(void)
{
	long double int a = 1;
	long double int b = 2;
	long double int b1 = 0;
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

