//�� ���� ������ ��� �������� ���� �� ����� ��ȯ�ϴ� �Լ�
#include <stdio.h>

void addNumber(int x, int y ){
	int sum = 0;
	while( x <= y ){
		sum += x++;
	}
	printf("The sum is %d\n",sum);
}

int main() {
	int a = 3, b = 50;
	addNumber( a , b );

	printf("end of program\n");

	return 0;
}