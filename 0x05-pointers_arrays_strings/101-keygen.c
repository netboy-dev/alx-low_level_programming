/**
 * main - Entry point
 *
 * Description: Generates a random valid password for 101-crackme
 * Return: Always 0 (Success)
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random valid password for 101-crackme
 * Return: Always 0 (Success)
 */

int main(void)
{
        int i, sum, n;
        char password[84];

        srand(time(0));

        sum = 0;
        for (i = 0; sum < 2772; i++)
        {
                n = rand() % 62;
                if (n < 10)
                        password[i] = '0' + n;
                else if (n < 36)
                        password[i] = 'A' + n - 10;
                else
                        password[i] = 'a' + n - 36;
                sum += password[i];
        }

        password[i] = 2772 - sum;
        printf("%s", password);

        return (0);
}

