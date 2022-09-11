#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (m = 49; m < 58; m++)
	{
		putchar(m);
	}
	for (l = 50; l < 58; l++)
	{
		putchar(l);
	}
	if (l > m && m > n)
	{
		putchar(',');
	}
	if (n != 55 || m != 56)
	{
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
