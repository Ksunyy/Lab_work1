#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL,"");
  int x1, y1, x2, y2;

  printf("������� ���������� x1, y1, x2, y2 (0...8): ");
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  if (x1 == x2 && x2==y1 && y1==y2){
    printf("��� ����� �����");
    return 0;
  }

  if ((abs(x2-x1)==1 && abs(y2-y1)==2) || (abs(x2-x1)==2 && abs(y2-y1)==1)){
    printf("����\n");
  }

  if (x1==x2 || y1==y2){
    printf("����\n");
  }

  if ((abs(x2-x1)==1 && abs(y2-y1)==1) ||
      (abs(x2-x1)==1 && abs(y2-y1)==0) ||
      (abs(x2-x1)==0 && abs(y2-y1)==1)){
    printf("������\n");
  }

  if (abs(x2-x1)==abs(y2-y1)){
    printf("�����\n");
  }

  if ((abs(x2-x1)==abs(y2-y1)) || (x1==x2 || y1==y2)){
    printf("�����\n");
  }

  return 0;
}
