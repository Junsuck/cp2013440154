//�� ���� ������ ������ �� �Ҽ��� ȭ�鿡 ����ϴ� �Լ�
#include <stdio.h>
//�Լ��̸� printPrime()
//�Է� : �� ����
//��� : �� ���� ������ ���
//�μ�ȿ��: ����

void printPrime( int x, int y){
	while (x <= y){
		int i = 2, sum = 0;
		while( i <= x ){
			if( x % i == 0)
				sum = sum + 1;
			i = i + 1;
		}
		if( sum == 1)
			printf("%d\n",x);
		x = x + 1;
	}
}

int main() {
	int a = 3, b = 50;
	printPrime( a, b );

	printf("end of program\n");

	return 0;
}