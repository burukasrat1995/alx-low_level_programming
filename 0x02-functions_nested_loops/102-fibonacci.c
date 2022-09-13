#include <stdio.h>
/**
 * main - main function
 * Return: int
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int b1 = 0;
	int loop = 0;

	while (loop < 49)
	{
		printf("%d, ", a);
		b1 = b;
		b = a + b;
		a = b1;
		loop++;
	}
	printf("%d", a);
	return (0);
}

