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

	while (loop < 50)
	{
		printf("%d, ", a);
		b = b1;
		b = a + b;
		a = b1;
		loop++;
	}
	return (0);
}

