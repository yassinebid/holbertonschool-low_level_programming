#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int N;

	for (N = 1; N <= 100; N++)
	{
		if ((N % 3) == 0 && (N % 5) == 0)
			printf("FizzBuzz");

		else if ((N % 3) == 0)
			printf("Fizz");

		else if ((N % 5) == 0)
			printf("Buzz");

		else
			printf("%d", N);

		if (N == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
