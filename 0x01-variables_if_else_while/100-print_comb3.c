#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{

	int n, m;

	for (n = 48; n <= 56; n++)
	{
		putchar(n);
	}
	for (m = 49; m <= 57; m++)
	{
		putchar(m);
	}

	putchar('\n');

	return (0);
}
