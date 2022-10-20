/*
 * File: 103-fibonacci.c
 * Auth: luisfayezCode
 */

#include <stdio.h>

/**
 * main - prints the sum of even-valued
 * Fibonacci sequence terms whose value does not
 * exceed 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fibl = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fibl + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
