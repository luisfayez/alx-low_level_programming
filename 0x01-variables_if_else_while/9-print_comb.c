#include <stdio.h>
/**
 * main-lets move
 * Return:Always 0,else error occurs
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
