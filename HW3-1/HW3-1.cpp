///�� ���� ���̿� ��� ������(�� ���� ����)�� ������� ȭ�鿡 ����ϴ� �Լ�
//1. �Լ� �̸�:1.�Լ��̸��� �ҹ��ڷ� ���� 2. �Լ��� ù �ܾ�� ���� 3. �� �ܾ��̻��� ������ ��� �ι�° ���� �ܾ��� ù ���ڴ� �빮�� ex) printNumber
//2. �Լ� ��ȯ�� 3. �Լ� �Ű������� �� 4.�� �Ű������� �ڷ��� 

#include <stdio.h>
//�Լ� printNumber()
//�Է� : �� ����
//��� : ����
//�μ�ȿ�� : ����
void printNumber(int a, int b){ // (�迭�̸�[],�迭 ����)
	int count = a;
	while(count <=b){
		printf("%d\n", count++); ////a[count] : ������ index�� ���� ���.
	}
}
int main() {

	int a = 3, b = 50;
	//printNumber(a,b)
	printNumber(-20,100);

	printf("end of program\n");

//��а� �� �Ʒ��� �����ϼ���
	return 0;
}