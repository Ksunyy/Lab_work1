#include <stdio.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
void f1(zagk) {
	int otgp,kpop;
	kpop = 0;
	otgp = 10000;
	while (otgp != zagk) {
		++kpop;
		printf("������� %d \n",kpop);
		printf("������� �������������� ����� : ");
		
		scanf_s("%d", &otgp);
		if (otgp == 9999) {
			printf("���� ��������");
			break;
		}
		if (otgp < zagk) {
			printf("������\n");
		}
		if (otgp > zagk) {
			printf("������\n");
		}
	}
	if (otgp == zagk) {
		printf("�����, ���������� ����������� ���� %d \n", zagk);
		printf("���������� ������� %d", kpop);
	}
}
f2() {
	int otgk,sotgk;
	char vvp;
	vvp = 'f';
	sotgk = 1000;
	otgk = 500;
	while (vvp!= '=') {
		printf("%d \n",otgk);
		printf("������� = ���� ����� ��������, > ���� ����� ������ ���������������, < ���� ����� ������ ���������������: ");
		scanf_s("%s", &vvp);
		if (vvp == '>') {
			otgk = otgk + abs(sotgk - otgk) / 2;
		}
		else if (vvp == '<') {
			otgk = otgk - abs(sotgk - otgk) / 2;
		}
		else if (vvp == '=') {
			printf("��������� ����� ���� %d", otgk);
		}
	}
}
void main() {
	int res,zagk,zagp;
	srand(0);
	zagk = rand() % 1000;
	printf("%d", zagk);
	zagp = 10000;
	setlocale(LC_ALL, "RU");
	printf("������� 1 ��� ������� ������ � 2 ��� ������� ������ ��� ������ � ����� ������ ������� 9999: ");
	scanf_s("%d", &res);
	if (res == 9999) {
		printf("���� ��������");
	}
	else if (res == 1) {
		f1(zagk);
	}
	else if (res == 2) {
		f2();
	}
	else {
		printf("�� ������ �����");
	}
}