#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		putchar((i / 10) + 48);
	}
	for (j = 0; j < 100; j++)
	{
		putchar((i % 10) + 48);
	}
	if (i < j)
	{
		putchar(' ');
	}
	if (i != 98 || j != 99)
	{
		putchar((j / 10) + 48);
	}
	putchar(',');
	putchar(' ');


	putchar('\n');

	return (0);
}
