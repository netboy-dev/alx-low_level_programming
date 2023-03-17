#include <stdio.h>
/**
 * main - executions begins here
 * program prints all single digit numbers of base 10 starting from 0
 * Return: 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
