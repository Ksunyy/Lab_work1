#include <stdio.h>
#include <math.h>
int main() {
	// ��� ���������� ����, �� ����� �������� ����� ������ �������������� ����� � ���������� F : ������-1; �����-2; (rook)-�����-3; ����-4; ����-5.
	int x1, y1, x2, y2;
	scanf_s("%d %d %d %d ", &x1, &y1, &x2, &y2);
	// ����� ���� ��� �������� ������
	if (((abs(x1 - x2) <= 1) || ((x1 - x2) == 0)) && ((abs(y1 - y2) <= 1) || ((y1 - y2) == 0))) {
		printf("it turned out for an korol:\n");
	}
	else {
		printf("it didn't work out for the korol:\n");
	};
	// ����� ��� �����
	if ((x1 == x2 || y1 == y2)) {
		printf("it turned out for the rook:\n");
	}
	else {
		printf("it didn't work out for the rook:\n");
	};
	// ����� ��� ����
	if (((x1 + 1 == x2) && (y1 + 2 == y2)) || ((x1 - 1 == x2) && (y1 + 2 == y2)) || ((x1 + 2 == x2) && (y1 + 1 == y2)) || ((x1 + 2 == x2) && (y1 - 1 == y2)) || ((x1 + 1 == x2) && (y1 - 2 == y2)) || ((x1 - 1 == x2) && (y1 - 2 == y2)) || ((x1 - 2 == x2) && (y1 + 1 == y2)) || ((x1 - 2 == x2) && (y1 - 1 == y2))) {
		printf("it turned out for an kon':\n");
	}
	else {
		printf("it didn't work out for the kon':\n");
	};
	// ����� ��� �����
	if ((abs(x1 - x2) == (abs(y1 - y2)))) {
		printf("it turned out for an slon:\n");
	}
	else {
		printf("it didn't work out for the slon:\n");
	};
	if ((abs(x1 - x2) == (abs(y1 - y2))) || (x1 == x2 || y1 == y2)) {
		printf("it turned out for the ferz':\n");
	}
	else {
		printf("it didn't work out for the ferz':\n");
	};
	return 0;
} 