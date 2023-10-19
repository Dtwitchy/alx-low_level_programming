#include <stdio.h>

void primary(void) __attribute__((constructor));

/**
 * primary - prints a sentence before the main
 * function is executed
 */
void primary(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
