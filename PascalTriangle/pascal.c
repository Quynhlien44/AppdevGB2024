#include <stdio.h>
#include "screen.h"

void pascal_triangle(int rows) {
	int n, k;
	
	clearScreen();
	gotoXY(1, 35);
	setBGcolor(CYAN);
	printf("--Pascal Triangle--");
	resetColors();

	for (n = 0; n < rows; n++) {
		gotoXY(n + 2, 40 - n * 3);
		setFGcolor(RED + n%7);

		for (k = 0; k <= n; k++) {
			printf("%6d ", nchoosek(n, k)); 
			//printf("%6d ", binomial(n, k));
		}
		printf("\n");
	}
	resetColors();
}

int nchoosek(int n, int k) {
	//return factor(n) / factor(k) / factor(n - k);
	return factorial(n) / factorial(k) / factorial(n - k);
}

int factorial(int m) {
	if (m == 0) return 1;
	else return m * factorial(m - 1); // recursion
}