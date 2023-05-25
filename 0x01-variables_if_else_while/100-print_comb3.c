#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int t1, t2;

	for (t1 = 0; t1 < 9; t1++)
	{
		for (t2 = t1 + 1; t2 < 10; t2++)
		{
			putchar((t1 % 10) + '0');
			putchar((t2 % 10) + '0');

			if (t1 == 8 && t2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
