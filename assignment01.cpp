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
	int x, y;
	scanf_s("%d %d", &x, &y);
	if(x <= 80 && y <= 23){ //show in screen
		draw_ship(x, y);
	}
	return 0;
}
