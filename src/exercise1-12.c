/*
 * Program to print a histogram of lengths of words from input
 */

#include <stdio.h>

#define YES 1
#define NO  0

int main()
{
	int c, nw, inword, lastClear, currentWordLength;
	int hist[11] = {0};

	lastClear = YES;
	inword = NO;
	nw = 0;

	while ((c = getchar()) != EOF) {
		if (inword == NO && lastClear == YES && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
			++nw;
			lastClear = NO;
			inword = YES;
			currentWordLength = 1;
		} else if (c == ' ' || c == '\n' || c == '\t') {
				inword = NO;
				lastClear = YES;
				hist[(currentWordLength > 10 ? 10 : currentWordLength - 1)]++;
		} else {
			lastClear = NO;
			if (inword == YES) {
				currentWordLength++;
			}
		}
	}

	if (inword == YES) {
		// Count the last word
		hist[(currentWordLength > 10 ? 10 : currentWordLength - 1)]++;
	}

	for (int i = 0; i < 11; i++) {
		printf("%2.0d: (%d)\n", i + 1, hist[i]);
	}
}
