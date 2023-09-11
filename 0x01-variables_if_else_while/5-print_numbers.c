#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char d;

	for (d = '1'; d <= '9'; d++)
		putchar(d + '0');
	putchar('\n');
	return (0);
}
