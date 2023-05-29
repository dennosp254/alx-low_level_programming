#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: Input a string
  * Return: String in reverse
  */
void rev_string(char *s)
{
	int i = 0, x, y;
	char *str, temp;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	str = s;

	for (x = 0; x < (i - 1); x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			temp = *(str + y);
			*(str + y) = *(str + (y - 1));
			*(str + (y - 1)) = temp;
		}
	}

}
