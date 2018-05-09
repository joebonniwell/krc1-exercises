/*
 * Write a program to count blanks, tabs and newlines
 */
#include <stdio.h>

int main()
{
	int c;
	double blanks = 0;
	double tabs = 0;
	double newlines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			blanks++;
		} else if (c == '\t') {
			tabs++;
		} else if (c == '\n') {
			newlines++;
		}
	}

	printf("\nblanks: %.0f | tabs: %.0f | newlines: %.0f\n", blanks, tabs, newlines);
}
