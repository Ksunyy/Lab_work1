#include <stdio.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
int otgp=10000;
char vvp = 'f';
void f1(zagk) {
	int kpop;
	kpop = 0;
	otgp = 10000;
	while (otgp != zagk) {
		++kpop;
		printf("������� %d \n",kpop);
		printf("������� �������������� ����� (��� ������: 9999): ");
		otgp = 10000;
		scanf_s("%d", &otgp);
		if (otgp >=10000 || otgp <=0) {
			printf("������ �����\n");
			vvp = '9';
			otgp = 9999;
			break;
		}
		if (otgp == 9999) {
			printf("���� ��������\n");
			break;
		}
		else if (otgp < zagk) {
			printf("������\n");
		}
		else if (otgp > zagk) {
			printf("������\n");
		}
		else if (otgp == zagk) {
			printf("�����, ���������� ����������� ���� %d \n", zagk);
			printf("���������� �������: %d \n", kpop);
		}
	}
}
void f2() {
	int otgk,sotgk, code,c;
	sotgk = 1000;
	otgk = 500;
	code = 1;
	vvp = 'f';
	while (vvp != '=') {
		printf("��������� �����������: %d \n", otgk);
		printf("������� = ���� ����� ��������, > ���� ����� ������ ���������������, < ���� ����� ������ ��������������� \n");
		printf("(��� ������ ������� 9): ");
		vvp = 'f';
		scanf_s(" %c", &vvp, 1);
		printf("%c", vvp);
		if (vvp == '9') {
			printf("����� �� 2 ������ \n");
			break;
		}
		if (vvp == '>') {
			c = otgk;
			if (sotgk != otgk) {
				otgk = otgk + abs(sotgk - otgk) / 2;
			}
			else {
				otgk = otgk + 1;
			}
			sotgk = c;
		}
		else if (vvp == '<') {
			c = otgk;
			if (sotgk != otgk) {
				otgk = otgk - abs(sotgk - otgk) / 2;
			}
			else {
				otgk = otgk - 1;
			}
			sotgk = c;
			}
		else if (vvp == '=') {
			printf("���������� ����� ����: %d \n", otgk);
			}
		else {
			printf("�� ������ ���� \n");
		}
	}
}
void main() {
	int res, zagk, zagp;
	srand(time(NULL));
	
	zagp = 10000;
	setlocale(LC_ALL, "RU");
	otgp == 10000;
	vvp = 'f';
	printf("��� ��������� ����� ��� ������: � ������ ������ ��������� ���������� �����, \n� ������������ ������ ��� �������, �� 2 ������ ������������ ���������� �����, � ��������� �������� ��� ��������\n");
	while (otgp!=9999 || vvp != '9'){
		printf("������� 1 ��� ������� ������ � 2 ��� ������� ������ (��� ������ 9): ");
		res = 99;
		scanf_s("%d", &res);
		zagk = rand() % 1000;
		if (res == 99) {
			printf("������ �����");
			break;
		}
		if (res == 9999) {
			printf("���� ��������");
		}
		else if (res == 1) {
			f1(zagk);
		}
		else if (res == 2) {
			f2();
		}
		else if (res == 9) {
			printf("�����");
			break;
		}
		else {
			printf("�� ������ �����  \n");
		}
	}
}