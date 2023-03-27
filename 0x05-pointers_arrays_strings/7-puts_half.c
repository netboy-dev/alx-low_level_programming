#include"main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	/* find the length of the string */
	while (*(str + len))
		len++;

	/* calculate the starting index for the second half of the string */
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	/* print the second half of the string */
	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}

