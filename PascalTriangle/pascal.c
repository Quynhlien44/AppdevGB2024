#include <stdio.h>
#include "screen.h"

void pascal_triangle(int rows) {
	int n, k;
	
	clearScreen();
	for (n = 0; n < rows; n++) {
		gotoXY(n + 1, 40 - n * 2);
		setFGcolor(RED + n);
		for (k = 0; k <= n; k++) {
		//	printf("%d ", nchoosek(n, k)); 
			printf("%4d ", binomial(n, k));
		}
		printf("\n");
	}
}

int binomial(int n, int k) {
	//return factor(n) / factor(k) / factor(n - k);
	return factorial(n) / factorial(k) / factorial(n - k);
}

int factorial(int m) {
	if (m == 0) return 1;
	else return m * factorial(m - 1); // recursion
}