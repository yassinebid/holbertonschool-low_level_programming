#include <stdio.h>
#include <stdlib.h>
int get_change(int amount);
/**
 * main - entry point for change program
 *
 * @argc: arg counter, # of args passed
 * @argv: array of args passed
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", get_change(atoi(argv[1])));
	return (0);
}
/**
 * get_change - gets smallest amount of coins needed
 *
 * @num: amount to find num coins needed for
 *
 * Return: number of coins needed to make change
 */
int get_change(int num)
{
	int a, b, c, d, e;

	a = 0, b = 0, c = 0, d = 0, e = 0;
	if (num <= 0)
		return (0);
	while (num >= 25)
	{
		num -= 25;
		a++;
	}
	while (num >= 10)
	{
		num -= 10;
		b++;
	}
	while (num >= 5)
	{
		num -= 5;
		c++;
	}
	while (num >= 2)
	{
		num -= 2;
		d++;
	}
	while (num >= 1)
	{
		num -= 1;
		e++;
	}
	return (a + b + c + d + e);
}
