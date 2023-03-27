/**
 * _strlen - Returns the length of a string
 *
 * @s: String to be measured
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

