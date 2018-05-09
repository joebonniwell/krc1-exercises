/*
 * Program to print a histogram of lengths of words from input
 */

#include <stdio.h>

#define YES 1
#define NO  0

#define MAX_HIST 10

void countWordLength(int hist[], int wordLength);
void printBars(int numBars);

int main()
{
	int c, nw, inword, lastClear, currentWordLength;
	int hist[MAX_HIST] = {0};

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
				countWordLength(hist, currentWordLength);
		} else {
			lastClear = NO;
			if (inword == YES) {
				currentWordLength++;
			}
		}
	}

	if (inword == YES) {
		// Count the last word
		countWordLength(hist, currentWordLength);
	}

	for (int i = 0; i < MAX_HIST; i++) {
		printf("%2.0d: ", i + 1);
		printBars(hist[i]);
		printf("(%d)\n", hist[i]);
	}
}

void countWordLength(int hist[], int wordLength) {
	hist[(wordLength > MAX_HIST ? MAX_HIST : wordLength - 1)]++;
}

void printBars(int numBars) {
	for (int i = 0; i < numBars; i++) {
		printf("*");
	}
}
