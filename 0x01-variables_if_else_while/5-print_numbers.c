#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char d;
	
	for (d = 'a'; d <= 'z'; d++)
	{
		if (d != 'e' && d != 'q')
			putchar(d);
	}
	putchar('\n');
	return (0);
}
