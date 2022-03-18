#include "main.h"

/**
 * main  _isupper - checks if parameter is an uppercase character.
 * description return i or zero if uppcase or lowercase
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
