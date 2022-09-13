#include <stdio.h>
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
