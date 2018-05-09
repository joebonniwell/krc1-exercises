/*
 * Word counting program that prints input words 1 per line to the output
 */

#include <stdio.h>

#define YES 1
#define NO  0

int main()
{
	int c, inword;

	inword = NO;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			inword = NO;
			putchar('\n');
			continue;
		} else if (inword == NO) {
			inword = YES;
		}
		putchar(c);
	}
}
