#include <stdio.h>

/**
 * main-starting point
 *
 * Description: to prints every possible combinations of two two-digit numbers
 *
 * Return:0, else there is a mistake
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + j / 10);
			putcjar('0' + j % 10);

			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
