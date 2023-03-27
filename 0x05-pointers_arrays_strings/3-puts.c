#include <unistd.h>

/**
 * _puts - Prints a string to standard output
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	write(STDOUT_FILENO, str, len);
	write(STDOUT_FILENO, "\n", 1);
}
