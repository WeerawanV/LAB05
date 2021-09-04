#include<stdio.h>
#include<Windows.h>

void gotoxy(int x, int y) {
	COORD c = { x,y };
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship() {
	printf(" <-0-> ");
}

void draw_ship(int x, int y) {
	gotoxy(x, y);
	draw_ship();
}

int main() {
	int y = 20;
	for (int x = 1; x <= 80; x++) {
		draw_ship(x, y);
		Sleep(500);
	}
	return 0;
}
