/*
 * Write a program to convert its input to lower case using a lower function that takes and returns a character (int)
 */
#include <stdio.h>

int lower(int c);

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar(lower(c));
	}
}

int lower(int c) {
	if (c >= 'A' && c <= 'Z') {
		return c + ('a' - 'A');
	}
	return c;
}
