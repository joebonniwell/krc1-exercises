/*
 * Write a program to replace tabs and backspaces with arrow characters
 */
#include <stdio.h>

int main()
{
	int c = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('>');
			putchar('\b');
			putchar('-');
		} else if (c == '\b') {
			putchar('<');
			putchar('\b');
			putchar('-');
		} else {
			putchar(c);
		}
	}
}
