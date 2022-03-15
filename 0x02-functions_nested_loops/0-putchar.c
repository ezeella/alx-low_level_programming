#include "main.h"

/**
 * main- Description: It prints the word -putchar, followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
char word[8] = "-putchar";
int i;

for (i = 0; i < 8; i++)
	    _putchar(word[i]);

_putchar('\n');

return (0);
}
