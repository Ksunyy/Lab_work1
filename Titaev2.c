#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
// ����� ������ ������ 1(���� ���������� �����) ��� 2(��� ���������� �����)
	setlocale(LC_ALL, "Russian");
	int V;
	int robot;
	int A;
	int right;
	int left;
	int array[1001];
	printf("������� ������� ������/n");
	scanf("%d%d", &left, &right);
	printf("������� ����� �� ���� �������� �� ������ ���������. 1 - ���� ���������� �����, 2 - �� �����������./n");
	scanf("%V", &V);
	if ( V == 1) {
		robot = rand() % 1000;
		while (A != robot) {
			printf("������� ����� �� ���������/n");
			scanf("%A", &A);
			if (A > robot) {
				printf("�������� ����������� ����� ������ ������/n");
			}
			else if (A < robot) {
				printf("�������� ����������� ����� ������ ������/n");
			}
			else if (A == robot) {
				printf("�� ������� �������� �����/n");
			};
		}
	}
	else {

	};
	return 0;}