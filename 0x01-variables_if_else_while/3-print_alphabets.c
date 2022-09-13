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
		putchar(n);
		n++;
	}
	
	n = 'A';
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
