#include <stdio.h>
/**
  * main - Entry point
  * print the alphabet in lowercase
  * Return: (0) Success
  */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
