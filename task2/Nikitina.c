#include <stdio.h>
#include <locale.h>
#include <time.h>
void main() {
	setlocale(LC_ALL, "Rus");
	int mode,num2; // �����
	int flag = 0;
	int k = 0;// ���-�� �������
	
	printf("�������� �����: ");
	scanf_s("%d", &mode);
	// 1 �����
	if (mode == 1) {
		srand(time(NULL));
		int num1 = rand() % 1000; // ���������� �����
		int x; // �����, ������� ������������ ������
		do {
			flag = 0;
			printf("������� �����:");
			scanf_s("%d", &x);
			if (x < num1) {
				printf("���������� ����� ������\n");
				k++;
				flag = 1;
			}
			else if (x > num1) {
				printf("��������� ����� ������\n");
				k++;
				flag = 1;
			}
		} while (flag); 
		 
		if (x == num1) {
			k++;
			printf("�������!\n");
			printf("���������� �������: %d", k);
		}
		
		
	}// 2 �����
	if (mode == 2) {
		char c = '0';
		int right = 1001; // �������
		int left = 0;
		int mid = (right + left) / 2;
		
		printf("������� ���� �����: ");
		scanf_s("%d", &num2);
		
		while (c!='=') {
			printf("��� ����� %d?\n", mid);
			printf("������� ���������: ");
			scanf_s("\n%c", &c);
			k++;
			if (c == '=') {
				printf("����� ��������!\n���������� �������: %d", k);
				break;
			}
			else if (c == '<') {
				right = mid;
			
			}
			else if (c == '>') {
				left = mid;

			}
			mid = (right + left) / 2;
			
			
		}
	}
	
	
}