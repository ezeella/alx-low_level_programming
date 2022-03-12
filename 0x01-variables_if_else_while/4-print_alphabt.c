#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char emmanuella[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
	if (emmanuella[i] != "q" && emmanuella[1] != "e")
	{
		putchar(emmanuella[i]);
	}
}
putchar('\n');
return (0);
}
