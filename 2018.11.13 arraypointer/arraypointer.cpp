#include <stdio.h>
//printArray
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : ȭ�鿡 �迭�� ���� ���

//void printArray(int arr[], int len){ // ������ �迭�� �Լ��� ������ ��� �ذ� ���� ������ ���� ����Ѵ�.
void printArray(int* arr, int len){ // ���� ���� ��������� �迭�� �Լ��� �ѱ涧 ������ ������ ���� ����Ѵ�. 
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}
int main() {
	int a[3] = {10, 20, 30};//�迭�� ���� : �迭�̸�: a, �迭����: 3
	int* ptr;

	//a = ptr; // -->error WHY? �迭�� �̸�(a)�� ���� ������ �ִ�. �� rvalue�̴�.
	//10 = a[2]; //error ���� ���� ����

	printArray(a,3);

	return 0;
}