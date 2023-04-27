#include <stdio.h>

/**
 * myStartupFun - Prints a string before the main function is executed.
 */
void myStartupFun(void) __attribute__ ((constructor));

void myStartupFun(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

