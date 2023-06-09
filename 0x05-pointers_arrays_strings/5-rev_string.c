#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: Input String
 *
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	int i, size, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	size = i - 1;
	half = size / 2;
	while (half >= 0)
	{
		first = s[size - half];
		last = s[half];
		s[half] = first;
		s[size - half] = last;
		half--;
	}
}
