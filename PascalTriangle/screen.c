#include <stdio.h>

void setFGcolor(int color) {
	printf("\x1B[%dm", color);
	fflush(stdout);
}

void clearScreen(void) {
	printf("\x1B[2J");
	fflush(stdout);
}

void gotoXY(int row, int col) {
	printf("\x1b[%d;%dH", row, col);
	fflush(stdout);
}