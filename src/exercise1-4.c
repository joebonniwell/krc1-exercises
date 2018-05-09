/*
 * Print a Celsius to Fahrenheit table
 */

#include <stdio.h>

int main() {
	int lower, upper, step;
	float fahr, celsius;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius Fahrenheit\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("  %4.0f      %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
