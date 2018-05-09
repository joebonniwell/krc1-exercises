/*
 * Write a program to copy input to output and replace each multi-blank sequence with a single blank
 */
#include <stdio.h>

int main()
{
	int c = 0;
	int previousBlank = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (previousBlank != 1) {
				putchar(c);
				previousBlank = 1;
			}
		} else {
			putchar(c);
			previousBlank = 0;
		}
	}
}
