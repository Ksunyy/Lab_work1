#include <stdio.h>
#include <locale.h>
#include <time.h>

void f2() {   //2 �����
	int answer, left, right, mid, ch, otvet, k, zagadch;
	char znak;
	right = 1000;
	k = 1;
	left = 1;
	otvet = -1;

	do {
		printf("������� �����, ������� ������ �������� (�� 1 �� 1000)\n");
		scanf_s("%d", &zagadch);
		if ((zagadch < 1) || (zagadch > 1000)) while (ch = getchar() != '\n');
	} while ((zagadch < 1) || (zagadch > 1000));

	while (ch = getchar() != '\n');

	while (right - left > 2) {
		mid = (left + right) / 2 + (left + right) % 2;

		///printf("%d %d %d\n", left, mid, right);

		do {
			printf("�������� ����� ������ %d? (������� >, < ��� =)\n", mid);
			scanf_s("%c", &znak);
			answer = znak;
			if ((answer > 62) || (answer < 60)) while (ch = getchar() != '\n');
		} while ((answer > 62) || (answer < 60));

		if (answer == 62) {
			left = mid + 1;
		}
		else {
			if (answer == 60) {
				right = mid - 1;
			}
			else {
				otvet = mid;
				break;
			}
		}

		while (ch = getchar() != '\n');

		k++;
	}


	if (otvet == -1) {
		mid = (left + right) / 2;

		//printf("%d %d %d\n", left, mid, right);


		do {
			//printf("> < =\n");
			printf("�������� ����� ������ %d? (������� >, < ��� =)\n", mid);
			scanf_s("%c", &znak);
			answer = znak;
			if ((answer > 62) || (answer < 60)) while (ch = getchar() != '\n');
		} while ((answer > 62) || (answer < 60));

		if (answer == 62) {
			otvet = right;
		}
		else {
			if (answer == 60) {
				otvet = left;
			}
			else otvet = mid;
		}

		while (ch = getchar() != '\n');
	}
	if (zagadch != otvet) {
		printf("��������� �� ������� ������� �����\n");
		printf("��������� �������� ����� %d\n", otvet);
		printf("�� �������� ����� %d\n", zagadch);
	}
	else printf("��������� �������� ���������� ���� ����� %d\n", otvet);
	printf("����� �������: %d\n", k);
}


void f1() {
	int answer, user, ch, k;
	
	k = 0;
	/*srand(0);
	answer = rand()%1000 + 1;*/
	
	srand(time(NULL));
	answer = rand() % 1000 + 1;

	do {
		do {
			printf("������� �������������� ����� (�� 1 �� 1000)\n");
			scanf_s("%d", &user);
			if ((user < 1) || (user > 1000)) while (ch = getchar() != '\n');
		} while ((user < 1) || (user > 1000));
		
		if (user != answer) {
			if (user > answer) printf("���������� ����� ������\n");
			else printf("���������� ����� ������\n");
		}
		k += 1;
	} while (user != answer);

	printf("�� �������\n");
	printf("���� �������� ����� %d\n", answer);
	printf("����� �������: %d\n", k);
}

void main() {
	int flag, rez, ch;
	flag = 0;
	setlocale(LC_ALL, "Rus");

	printf("����� 1. ��������� ����������� ��������� ����� �� ��������� �� 1 �� 1000. ������������\n������ ������� �������, �� ������� ��������� �������� : ����������� ����� ������,\n���������� ����� ������, ��������.������ �����������, ����� ������������ �������\n �����.����� ��������� ������ ������������ ����� ������� � �������� ��� � ����� ������.\n");
	printf("\n");
	printf("����� 2. ������������ ���������� ����� �� ��������� �� 1 �� 1000 � ������ ���. ���������\n�������� ��������� �����, ������ �� ����� �������, �� ������� ������������ ������ > , < ��� = .\n������ �����������, ����� ��������� ������� �����.����� ��������� ������ ������������\n");
	printf("\n");

	do {
		printf("�������� ����� (������� 1 ��� 2)\n");
		scanf_s("%d", &rez);
		if (rez < 1 || rez>2) while (ch = getchar() != '\n');
	} while (rez < 1 || rez>2);
	
	if (rez == 2) f2();
	else f1();
}