#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * Return: Always 0 (Pass)
 */
int main(void)
{
	int n;

	for (n = 23; n < 43; n++)
	{
		putchar(n);
		if (n != 42)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
