#include <stdio.h>

int main() {
	int a = 10; //1. �������� + �����ʱ�ȭ
	int* ptr;   //2. ptr : ������ ���� ����, int *ptr�ε� �� �� �ִ�.
	ptr = &a;   //3. &a --> "address of' a, ���� a�� �ּ�(���� a�� ���� �Ҵ��� �޸��� ù��° �ּ�)
	*ptr = 20;  //4. *ptr --> "data of" ptr, �����ͺ��� ptr�� ����Ű�� ���� ������
	printf("a=%d\n",a); /// ��������� Ȯ���غ���

	return 0;
}