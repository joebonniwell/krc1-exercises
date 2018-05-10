/*
 * Write a function rindex(s, t), which returns the position of the rightmost occurrence of t in s, or -1 if there is none
 */

#include <stdio.h>

int myrindex(char s[], char t[]);

int main()
{
	char outter[] = "world says hello world";
	char inner[] = "world";
	printf("Outter: %s\n", outter);
	printf("Inner: %s\n", inner);
	int index = myrindex(outter, inner);
	printf("Index: %d\n", index);
}

int myrindex(char s[], char t[]) {
	// Get last index of s (length)
	int lastIndexT = 0;
	for (lastIndexT = 0; t[lastIndexT] != '\0'; lastIndexT++);

	int lastIndexS = 0;
	for (lastIndexS = 0; s[lastIndexS] != '\0'; lastIndexS++);

	for (int sCursor = lastIndexS; sCursor >= 0; sCursor--) {
		// This iterates from back to front on string s
		int tCursor;
		for (tCursor = lastIndexT; tCursor >= 0 && t[tCursor] == s[sCursor - (lastIndexT - tCursor)]; tCursor--);
		if (tCursor == -1) {
			return sCursor - lastIndexT;
		}
	}
	return -1;
}
