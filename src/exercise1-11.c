/*
 * Word counting program with word defined as starting with a letter
 */

#include <stdio.h>

#define YES 1
#define NO  0

int main()
{
	int c, nw, inword, lastClear;

	lastClear = YES;
	inword = NO;
	nw = 0;

	while ((c = getchar()) != EOF) {
		if (inword == NO && lastClear == YES && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
			++nw;
			lastClear = NO;
			inword = YES;
		} else if (c == ' ' || c == '\n' || c == '\t') {
				inword = NO;
				lastClear = YES;
		} else {
			lastClear = NO;
		}
	}

	printf("%d\n", nw);
}
