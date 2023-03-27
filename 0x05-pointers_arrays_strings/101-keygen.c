#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
        int i, sum, rand_num;
        char password[100];

        srand(time(NULL)); /* Set random seed */

        sum = 0;
        i = 0;

        /* Generate random printable ASCII characters */
        while (sum < 2772 - 122)
        {
                rand_num = rand() % 94 + 32;
                password[i] = (char)rand_num;
                sum += rand_num;
                i++;
        }

        password[i] = (char)(2772 - sum);
        i++;

        password[i] = '\0'; /* Null-terminate the password string */

        printf("%s", password); /* Print the generated password */

        return (0);
}

