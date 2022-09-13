#include <stdio.h>
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	int n = '0', c = ',', s = ' ';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(c);
			putchar(s);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
