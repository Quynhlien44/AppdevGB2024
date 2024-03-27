#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "screen.h"
#include "pascal.h"

int main(void) {
	int rows;
	printf("Welcom to Pascal\n");
	printf("Enter the number of rows of Pascal Triangle: ");
	scanf("%d", &rows);
	
	pascal_triangle(rows);
}