#include "main.h"
/**
 * jack_bauer - print 24 hr
 * Return: void
 */
void jack_bauer(void)
{
	int n1, n2, n3, n4, min = 0;

		n1 = 48;
		while (n1 < 51)
		{
			n2 = 48;
			while (n2 < 58)
			{
				n3 = 48;
				while (n3 < 54)
				{
					n4 = 48;
					while (n4 < 58)
					{
						_putchar(n1);
						_putchar(n2);
						_putchar(58);
						_putchar(n3);
						_putchar(n4);
						_putchar('\n');
						n4++;
						min++;
						if (min == 1440)
							return;
					}
					n3++;
				}
				n2++;
			}
			n1++;
		}
}
