/*
 * Experiment with other escaped values in printf besides newline (\n)
 */

#include <stdio.h>

int main() {
	printf("hello, world\n");
	printf("(\\t) hello,\tworld\n");
	printf("(\\r) hello,\rworld\n");
	printf("(\\\\) hello,\\world\n");
	printf("(\\v) hello,\vworld\n");
	printf("(\\b) hello,\bworld\n");
}
