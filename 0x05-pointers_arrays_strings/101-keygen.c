#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;
	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 94 + 32; // Generate ASCII printable characters
						//
						
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);
	return 0;
}

