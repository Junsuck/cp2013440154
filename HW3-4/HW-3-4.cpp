// 3�� �� ���� ���� ������ ��ȯ�ϴ� �Լ�
#include <stdio.h>
//�Լ� printNumber()
//�Է� : �� ����
//��� : ����
//�μ�ȿ�� : ����
void printNumber( int x, int y, int z){
	int print = x;
	if( print > y )
		print = y;
	if( print > z )
		print = z;
	printf("The smallest number is %d\n",print);
}

int main() {
	int a , b, c;
	printf("ù ��° ������ �Է��Ͻÿ� :");
	scanf("%d",&a);
	printf("�� ��° ������ �Է��Ͻÿ� :");
	scanf("%d",&b);
	printf("�� ��° ������ �Է��Ͻÿ� :");
	scanf("%d",&c);

	printNumber( a, b ,c);

	printf("end of program\n");

	return 0;
}