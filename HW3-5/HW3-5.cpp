//n���� �������� ȭ�鿡 ����ϴ� �Լ�
#include <stdio.h>
//�Լ��̸� printMultiplication()
//�Է� : �� ���� ����
//��� : �Է��� ������ ������
//�μ�ȿ��: ����
void addMultiplication(int x){
	printf("%d\n",x*1);
	printf("%d\n",x*2);
	printf("%d\n",x*3);
	printf("%d\n",x*4);
	printf("%d\n",x*5);
	printf("%d\n",x*6);
	printf("%d\n",x*7);
	printf("%d\n",x*8);
	printf("%d\n",x*9);
}

int main() {
	int a;
	printf("�� �ڸ� ������ �Է��Ͻÿ� :");
	scanf("%d",&a);

	addMultiplication(a);

	printf("end of program\n");

	return 0;
}