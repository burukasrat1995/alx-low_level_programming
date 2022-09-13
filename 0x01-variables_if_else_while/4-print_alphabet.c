#include <stdio.h>
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		if (n != 'q' || n != 'e')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
