#include "main.h"

/**
* string_toupper - lowercase to uppercase
*
* @str: Input String.
*
* Return: str
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
